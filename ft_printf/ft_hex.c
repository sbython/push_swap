/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 23:42:17 by msbai             #+#    #+#             */
/*   Updated: 2023/12/05 22:39:18 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned int nb, int c, int i)
{
	char	*hex;
	int		len;

	len = 0;
	if (nb == 0 && i)
		return (ft_putchar('0'));
	if (c == 1)
		hex = ft_strdup("0123456789abcdef");
	if (c == 2)
		hex = ft_strdup("0123456789ABCDEF");
	if (nb < 16)
		len += ft_putchar(hex[nb]);
	if (nb >= 16)
	{
		len += ft_hex(nb / 16, c, 0);
		len += ft_hex(nb % 16, c, 0);
	}
	free(hex);
	return (len);
}
