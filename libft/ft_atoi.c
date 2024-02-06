/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 22:13:35 by msbai             #+#    #+#             */
/*   Updated: 2024/02/05 00:46:40 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long int	ft_atoi(const char *num)
{
	long int	i;
	long int	res;
	long int	sing;

	i = 0;
	res = 0;
	sing = 1;
	while ((num[i] >= 9 && num[i] <= 13) || num[i] == 32)
	{
		i++;
	}
	if (num[i] == '-')
	{
		i++;
		sing = -1;
	}
	else if (num[i] == '+')
		i++;
	while (num[i] <= '9' && num[i] >= '0')
		res = (res * 10) + num[i++] - '0';
	return (res * sing);
}
