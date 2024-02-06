/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:48:21 by msbai             #+#    #+#             */
/*   Updated: 2023/11/26 19:59:07 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int			i;
	char		str[10];
	long int	num;

	num = n;
	i = 0;
	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		num *= -1;
	}
	while (num > 0)
	{
		str[i++] = (num % 10) + '0';
		num /= 10;
	}
	while (i > 0)
	{
		ft_putchar_fd(str[--i], fd);
	}
}
