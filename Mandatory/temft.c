/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 15:56:29 by msbai             #+#    #+#             */
/*   Updated: 2024/03/18 22:52:05 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	i_arr(int *arr, int nbr, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (nbr == arr[i])
			return (i);
		i++;
	}
	return (0);
}

void	fill_index(t_list **s_a, int *arr)
{
	t_list	*tmp;
	int		len;

	len = ft_lstsize(*s_a);
	tmp = *s_a;
	while (tmp)
	{
		tmp->index = i_arr(arr, tmp->content, len);
		tmp = tmp->next;
	}
}

void	swap_in_arr(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	find_index(t_list *s_a, int x, int p)
{
	int	i;

	i = 0;
	while (s_a)
	{
		if (s_a->index <= x || s_a->index <= x + p)
			break ;
		i++;
		s_a = s_a->next;
	}
	return (i);
}
