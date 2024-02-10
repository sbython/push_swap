/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printlist.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 04:19:58 by msbai             #+#    #+#             */
/*   Updated: 2024/02/10 18:59:11 by msbai            ###   ########.fr       */
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
