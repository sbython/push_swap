/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 23:42:59 by msbai             #+#    #+#             */
/*   Updated: 2023/12/05 22:39:47 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long int nbr)
{
	int		len;
	char	str[10];
	int		i;

	len = 0;
	i = 0;
	if (nbr == 0)
		return (ft_putchar('0'));
	else if (nbr < 0)
	{
		len += ft_putchar('-');
		nbr = -nbr;
	}
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
