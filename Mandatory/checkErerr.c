/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkErerr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 03:40:22 by msbai             #+#    #+#             */
/*   Updated: 2024/03/14 23:42:43 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ererr(void *str)
{
	free(str);
	ft_printf("Error\n");
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
			frfun(av);
			ererr(ptr);
		}
		tmp = ptr;
		av[start] = rm_zero(av[start]);
		ptr = addspace(ft_strjoin(ptr, av[start]));
		free(tmp);
		free(av[start++]);
	}
	return (ptr);
}

int	checklist(char *str)
{
	int		i;
	char	c;

	i = 0;
	if (!str )
		return (0);
	while (str[i])
	{
		c = str[i];
		if ((c == '-' || c == '+') && !(str[i + 1] >= '0' && str[i + 1] <= '9'))
			ererr(str);
		else if ((c < '0' || c > '9') && !(c == '-' || c == '+' || c == ' '))
			ererr(str);
		i++;
	}
	return (1);
}
