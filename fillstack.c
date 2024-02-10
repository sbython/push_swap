/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillstack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 05:24:32 by msbai             #+#    #+#             */
/*   Updated: 2024/02/10 18:59:29 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	free_listarr(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
		free(ptr[i++]);
	free(ptr);
}

int	chakmiax(char *p, long int n)
{
	char	*n2;

	n2 = ft_itoa(n);
	if (ft_strncmp(n2, p, 12))
		return (1);
	return (0);
}

int	checknbr(t_list *list, long int nbr)
{
	t_list	*p;

	if (!list)
		return (0);
	p = list;
	while (p)
	{
		if (p->content == nbr)
			return (1);
		p = p->next;
	}
	return (0);
}

t_list	*fillstack(char *str)
{
	t_list		*list;
	char		**ptr2;
	int			i;
	long int	number;

	list = NULL;
	i = 0;
	ptr2 = ft_split(str, ' ');
	if (!ptr2[i])
		ererr();
	while (ptr2[i])
	{
		number = ft_atoi(ptr2[i]);
		if (checknbr(list, number) || chakmiax(ptr2[i], number))
			ererr();
		ft_lstadd_back(&list, ft_lstnew(number));
		i++;
	}
	return (list);
}
