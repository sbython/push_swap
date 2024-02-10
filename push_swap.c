/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:14:29 by msbai             #+#    #+#             */
/*   Updated: 2024/02/10 18:58:27 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int ac, char **av)
{
	char	*ptr;
	t_list	*list_a;
	t_list	*list_b;

	ptr = returnstr(ac, av);
	list_b = NULL;
	if (!checklist(ptr))
		return (0);
	list_a = fillstack(ptr);
	if (ft_lstsize(list_a) <= 3)
		ft_printf("3");
	else if (ft_lstsize(list_a) > 3 && ft_lstsize(list_a) <= 5)
		ft_printf("5");
	else
		ft_printf("100");
	return (0);
}
