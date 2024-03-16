/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tmpft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 22:07:27 by msbai             #+#    #+#             */
/*   Updated: 2024/03/16 04:00:34 by msbai            ###   ########.fr       */
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

char    *rm_zero(char *str)
{
    int i;
    char *s;
	char *ptr;
    i = 0;
    while ((str[i] == '0' || str[i] == '+' || str[i] == '-') && str[i])
        i++;
	s = ft_substr(str, i, ft_strlen(str));
	if(str[0] == '-')
	{
		ptr = malloc(ft_strlen(s) + 2);
		ptr[0] = '-';
		ft_memmove(ptr+1, s, ft_strlen(str)+1);
		free(s);
		return (ptr);
	}
	
	//free(str);
    return (s);
}