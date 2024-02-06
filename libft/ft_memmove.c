/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:46:42 by msbai             #+#    #+#             */
/*   Updated: 2023/11/27 11:19:28 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (d == s)
		return (dest);
	else if (d < s)
	{
		while (n-- > 0)
			*d++ = *s++;
	}
	else
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	return (dest);
}
