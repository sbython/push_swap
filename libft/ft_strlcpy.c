/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:04:06 by msbai             #+#    #+#             */
/*   Updated: 2023/11/26 13:47:31 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	len;

	len = 0;
	if (n == 0)
	{
		return (ft_strlen(src));
	}
	while (src[len] && len < n - 1)
		*dest++ = src[len++];
	*dest = '\0';
	while (src[len])
		len++;
	return (len);
}
