/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 23:42:21 by msbai             #+#    #+#             */
/*   Updated: 2023/12/05 22:39:21 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexp(long unsigned int nbr, int i)
{
	char	*hex;
	int		len;

	len = 0;
	if (nbr == 0 && i)
		return (ft_putstr("(nil)"));
	if (i)
		len += ft_putstr("0x");
	hex = "0123456789abcdef";
	if (nbr < 16)
		len += ft_putchar(hex[nbr]);
	if (nbr >= 16)
	{
		len += ft_hexp(nbr / 16, 0);
		len += ft_hexp(nbr % 16, 0);
	}
	return (len);
}
