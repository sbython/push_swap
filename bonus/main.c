/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 23:56:14 by msbai             #+#    #+#             */
/*   Updated: 2024/03/18 22:56:06 by msbai            ###   ########.fr       */
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
		return (free(ptr), 0);
	list_a = fillstack(ptr);
	check_move(&list_a, &list_b);
	if (if_sorted(list_a))
		ft_printf("OK");
	else
		ft_printf("KO");
	free(ptr);
	ft_lstclear(&list_a, fr);
	ft_lstclear(&list_b, fr);
	return (0);
}
