/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:13:28 by msbai             #+#    #+#             */
/*   Updated: 2023/11/26 17:31:22 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strnub(long int n, char *s, int len)
{
	long int	num;

	num = n;
	if (n == 0)
	{
		s[0] = '0';
		return (s);
	}
	else if (n < 0)
	{
		s[0] = '-';
		num *= -1;
	}
	while (num >= 10)
	{
		s[--len] = (num % 10) + '0';
		num = num / 10;
	}
	s[--len] = (num % 10) + '0';
	return (s);
}

static int	cont(long int n)
{
	int	i;

	i = 0;
	while (n > 9)
	{
		i++;
		n /= 10;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	size_t		len;
	long int	num;
	char		*ptr;

	num = n;
	len = 0;
	if (num < 0)
	{
		num *= -1;
		len = 1;
	}
	len += cont(num);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ptr = ft_strnub(n, ptr, len);
	ptr[len] = '\0';
	return (ptr);
}
