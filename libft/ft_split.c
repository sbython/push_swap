/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:14:57 by msbai             #+#    #+#             */
/*   Updated: 2023/11/27 11:24:44 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**freefun(char **ptr, int i)
{
	while (i >= 0)
	{
		free(ptr[i--]);
	}
	free(ptr);
	return (NULL);
}

static char	**mall(char *s, char c)
{
	char	**ptr;
	int		start;
	int		i;
	int		cont;

	cont = 0;
	i = 0;
	start = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (start != i)
			cont++;
	}
	ptr = (char **)malloc(sizeof(char *) * (cont + 1));
	if (!ptr)
		return (NULL);
	return (ptr);
}

static char	**malworld(char **ptr, char *s, char c)
{
	int	start;
	int	i;
	int	j;

	j = 0;
	i = 0;
	start = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (start != i)
		{
			ptr[j] = (char *)malloc(sizeof(char) * (i - start + 1));
			if (!ptr[j])
				return (freefun(ptr, j));
			j++;
		}
	}
	ptr[j] = NULL;
	return (ptr);
}

static void	putworld(char **ptr, char *s, char c)
{
	int	start;
	int	i;
	int	j;

	j = 0;
	i = 0;
	start = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (start != i)
		{
			ft_memcpy(ptr[j], s + start, i - start);
			ptr[j][i - start] = '\0';
			j++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;

	if (!s)
		return (NULL);
	ptr = mall((char *)s, c);
	if (!ptr)
		return (NULL);
	ptr = malworld(ptr, (char *)s, c);
	if (!ptr)
		return (NULL);
	putworld(ptr, (char *)s, c);
	return (ptr);
}
