/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort100.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:39:43 by msbai             #+#    #+#             */
/*   Updated: 2024/03/18 21:28:42 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	sortarry(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		while (i && i < size && arr[i - 1] > arr[i])
		{
			swap_in_arr(&arr[i - 1], &arr[i]);
			i--;
		}
		i++;
	}
}

int	*list_to_arry(t_list **s_a)
{
	int		*arr;
	t_list	*p;
	int		i;

	arr = malloc(ft_lstsize(*s_a) * sizeof(int));
	if (!arr)
		return (NULL);
	p = *s_a;
	i = 0;
	while (p)
	{
		arr[i++] = p->content;
		p = p->next;
	}
	sortarry(arr, ft_lstsize(*s_a));
	return (arr);
}

void	sort_nbr(t_list **s_a, t_list **s_b, int *arr, int p)
{
	int	len;
	int	i;

	i = 0;
	len = ft_lstsize(*s_a);
	fill_index(s_a, arr);
	while (i < len)
	{
		if ((*s_a)->index <= i)
		{
			pab(1, s_a, s_b);
			rab(NULL, s_b);
			i++;
		}
		else if ((*s_a)->index <= i + p)
		{
			pab(1, s_a, s_b);
			i++;
		}
		else if (find_index(*s_a, i, p) < ft_lstsize(*s_a) / 2)
			rab(s_a, NULL);
		else
			rrab(s_a, NULL);
	}
	free(arr);
}

void	sort100(t_list **s_a, t_list **s_b)
{
	int	len;

	len = ft_lstsize(*s_a);
	if (len <= 400)
		sort_nbr(s_a, s_b, list_to_arry(s_a), 10);
	else
		sort_nbr(s_a, s_b, list_to_arry(s_a), 30);
	back_to_a(s_a, s_b);
}
