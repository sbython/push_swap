/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:27:53 by msbai             #+#    #+#             */
/*   Updated: 2023/11/26 17:30:32 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	ldest;
	size_t	lsrc;
	size_t	i;

	lsrc = ft_strlen(src);
	if (n == 0 && !dest)
	{
		return (lsrc);
	}
	ldest = ft_strlen(dest);
	i = 0;
	if (n == 0 || n <= ldest)
	{
		return (n + lsrc);
	}
	while (src[i] && i < n - ldest - 1)
	{
		dest[i + ldest] = src[i];
		i++;
	}
	dest[i + ldest] = '\0';
	return (ldest + lsrc);
}
