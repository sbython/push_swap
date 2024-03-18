/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 08:09:27 by msbai             #+#    #+#             */
/*   Updated: 2024/03/18 22:57:44 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	check_rule(char *str)
{
	if (!ft_strncmp("ra\n", str, 3))
		return (1);
	else if (!ft_strncmp("rb\n", str, 3))
		return (2);
	else if (!ft_strncmp("rr\n", str, 3))
		return (3);
	else if (!ft_strncmp("sa\n", str, 3))
		return (4);
	else if (!ft_strncmp("sb\n", str, 3))
		return (5);
	else if (!ft_strncmp("ss\n", str, 3))
		return (6);
	else if (!ft_strncmp("pa\n", str, 3))
		return (7);
	else if (!ft_strncmp("pb\n", str, 3))
		return (8);
	else if (!ft_strncmp("rrb\n", str, 4))
		return (9);
	else if (!ft_strncmp("rra\n", str, 4))
		return (10);
	else if (!ft_strncmp("rrr\n", str, 4))
		return (11);
	return (0);
}

void	funfor2(t_list **a, t_list **b, int n)
{
	if (n == 1)
	{
		re_rotate(a);
		re_rotate(b);
	}
	else if (n == 2)
	{
		rotate(a);
		rotate(b);
	}
	else
	{
		swap(a);
		swap(b);
	}
}

void	do_it(t_list **a, t_list **b, char *str)
{
	if (!ft_strncmp("ra\n", str, 3))
		rotate(a);
	else if (!ft_strncmp("rb\n", str, 3))
		rotate(b);
	else if (!ft_strncmp("rr\n", str, 3))
		funfor2(a, b, 2);
	else if (!ft_strncmp("sa\n", str, 3))
		swap(a);
	else if (!ft_strncmp("sb\n", str, 3))
		swap(b);
	else if (!ft_strncmp("ss\n", str, 3))
		funfor2(a, b, 0);
	else if (!ft_strncmp("pa\n", str, 3))
		push(b, a);
	else if (!ft_strncmp("pb\n", str, 3))
		push(a, b);
	else if (!ft_strncmp("rrb\n", str, 4))
		re_rotate(b);
	else if (!ft_strncmp("rra\n", str, 4))
		re_rotate(a);
	else if (!ft_strncmp("rrr\n", str, 4))
		funfor2(a, b, 1);
}

void	check_move(t_list **a, t_list **b)
{
	char	*rule;

	rule = get_next_line(0);
	while (rule)
	{
		if (!check_rule(rule))
			ererr(rule);
		do_it(a, b, rule);
		free(rule);
		rule = get_next_line(0);
	}
	free(rule);
	return ;
}
