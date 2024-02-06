/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:41:23 by msbai             #+#    #+#             */
/*   Updated: 2023/11/27 11:35:05 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	char const	*ptr;

	i = 0;
	ptr = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			ptr = &s[i];
		i++;
	}
	if ((char)c == s[i])
		return ((char *)(&s[i]));
	else
		return ((char *)(ptr));
}
