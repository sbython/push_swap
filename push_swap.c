/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:14:29 by msbai             #+#    #+#             */
/*   Updated: 2024/03/13 20:10:35 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
void fr(long int t)
{
	pass;
}

int	main(int ac, char **av)
{
	char	*ptr;
	t_list	*list_a;
	t_list	*list_b;

	ptr = returnstr(ac, av);
	list_b = NULL;
	if (!checklist(ptr))
		return (free(ptr),0);
	list_a = fillstack(ptr);
	free(ptr);
	if (ft_lstsize(list_a) <= 3 && ft_lstsize(list_a) > 1)
		sort3(&list_a);
	else if (ft_lstsize(list_a) > 3 && ft_lstsize(list_a) <= 5)
		sort5(&list_a, &list_b);
	else
		sort100(&list_a, &list_b);
		
	//printf_list("la",list_a);
	ft_lstclear(&list_a, fr);
	ft_lstclear(&list_b, fr);

	// printf_list("\nlb",list_b);
	return (0);
}
