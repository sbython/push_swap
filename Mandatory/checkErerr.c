/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkErerr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 03:40:22 by msbai             #+#    #+#             */
/*   Updated: 2024/03/19 05:01:16 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ererr(void *str)
{
	free(str);
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

char	*addspace(char *ptr)
{
	char	*p;

	p = ft_strjoin(ptr, " ");
	free(ptr);
	return (p);
}

int	ft_isnotvalid(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			j++;
		i++;
	}
	if (j == i)
		return (1);
	return (0);
}

char	*returnstr(int ac, char **av)
{
	int		start;
	int		i;
	char	*ptr;
	char	*tmp;

	ptr = NULL;
	i = 0;
	start = 1;
	while (start < ac)
	{
		if (ft_isnotvalid(av[start]))
		{
			ererr(ptr);
		}
		tmp = ptr;
		ptr = addspace(ft_strjoin(ptr, av[start++]));
		free(tmp);
	}
	return (ptr);
}

int	checklist(char *str)
{
	int		i;
	char	c;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		c = str[i];
		if ((c == '-' || c == '+'))
		{
			if ((i >= 1 && str[i - 1] != ' ') || !ft_isdigit(str[i + 1]))
				ererr(str);
		}
		else if ((c < '0' || c > '9') && !(c == '-' || c == '+' || c == ' '))
			ererr(str);
		i++;
	}
	return (1);
}
