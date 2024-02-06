/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unputnbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 23:43:05 by msbai             #+#    #+#             */
/*   Updated: 2023/12/05 22:39:53 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unputnbr(unsigned int nbr)
{
	int		len;
	char	str[10];
	int		i;

	len = 0;
	i = 0;
	if (nbr == 0)
		return (ft_putchar('0'));
	while (nbr > 0)
	{
		str[i++] = (nbr % 10) + '0';
		nbr /= 10;
	}
	len += i;
	while (i > 0)
	{
		ft_putchar(str[--i]);
	}
	return (len);
}
