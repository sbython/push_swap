/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tmpft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 22:07:27 by msbai             #+#    #+#             */
/*   Updated: 2024/03/18 22:54:59 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	printf_list(char *msg, t_list *list)
{
	t_list	*p;

	p = list;
	ft_printf("\n");
	ft_printf("%s ", msg);
	if (list == NULL)
	{
		ft_printf(" emty \n");
		return ;
	}
	while (p)
	{
		ft_printf("%d ", p->content);
		p = p->next;
	}
}

void	fr(long int t)
{
	(void) t;
}
