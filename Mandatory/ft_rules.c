/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:56:44 by msbai             #+#    #+#             */
/*   Updated: 2024/03/05 15:08:30 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	sab(t_list **s_a, t_list **s_b)
{
	if (s_a && s_b)
		ft_printf("ss\n");
	else if (s_a && !s_b)
		ft_printf("sa\n");
	else if (!s_a && s_b)
		ft_printf("sb\n");
	swap(s_a);
	swap(s_b);
}

void	pab(int i, t_list **s_a, t_list **s_b)
{
	if (i)
	{
		ft_printf("pb\n");
		push(s_a, s_b);
	}
	else 
	{
		ft_printf("pa\n");
		push(s_b, s_a);
	}
}

void	rab(t_list **s_a, t_list **s_b)
{
	if (s_a && s_b)
		ft_printf("rr\n");
	else if (s_a && !s_b)
		ft_printf("ra\n");
	else if (!s_a && s_b)
		ft_printf("rb\n");
	rotate(s_a);
	rotate(s_b);
}

void	rrab(t_list **s_a, t_list **s_b)
{
	if (s_a && s_b)
		ft_printf("rrr\n");
	else if (s_a && !s_b)
		ft_printf("rra\n");
	else if (!s_a && s_b)
		ft_printf("rrb\n");
	re_rotate(s_a);
	re_rotate(s_b);
}
