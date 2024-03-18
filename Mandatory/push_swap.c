/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:14:29 by msbai             #+#    #+#             */
/*   Updated: 2024/03/18 21:26:00 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	fr(long int t)
{
	(void)t;
}

int	main(int ac, char **av)
{
	char	*ptr;
	t_list	*list_a;
	t_list	*list_b;

	ptr = returnstr(ac, av);
	list_b = NULL;
	if (!checklist(ptr))
		return (free(ptr), 0);
	list_a = fillstack(ptr);
	free(ptr);
	if (if_sorted(list_a))
		(void)0;
	else if (ft_lstsize(list_a) <= 3 && ft_lstsize(list_a) > 1)
		sort3(&list_a);
	else if (ft_lstsize(list_a) > 3 && ft_lstsize(list_a) <= 5)
		sort5(&list_a, &list_b);
	else
		sort100(&list_a, &list_b);
	ft_lstclear(&list_a, fr);
	ft_lstclear(&list_b, fr);
	return (0);
}
