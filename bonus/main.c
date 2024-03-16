/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 23:56:14 by msbai             #+#    #+#             */
/*   Updated: 2024/03/15 22:27:38 by msbai            ###   ########.fr       */
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
		return (0);
	list_a = fillstack(ptr);
	printf_list("la",list_a);

	free(ptr);
	ft_lstclear(&list_a, fr);
	ft_lstclear(&list_b, fr);
	return (0);
}