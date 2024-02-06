/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillstack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 05:24:32 by msbai             #+#    #+#             */
/*   Updated: 2024/02/06 00:36:17 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int checknbr(t_list * list, long int nbr)
{
    t_list *p;
    if (!list)
		return (0);
    p = list;
    if (nbr < -2147483648|| nbr > 2147483647)
        return (1);
    while (p)
    {
        if(p->content == nbr )
            return (1);
        p = p->next;
    }
    return (0);
}
t_list *fillstck(char *str)
{
    t_list      *list;
    char        **ptr2;
    int         i;
    long int    number;    

    list = NULL; 
    i = 0;
    ptr2 = ft_split(str, ' ');
    if (!ptr2[i])
             return(ft_printf("we have ererr"),NULL);
    while (ptr2[i])
    {
        number = ft_atoi(ptr2[i]);
        //printf("%s == %ld\n", ptr2[i], number);
        if (checknbr(list, number))
            return(ft_printf("double number or passing max/min int"),NULL);
        ft_lstadd_back(&list, ft_lstnew(number));
        i++;
    }
    return (list);
}
