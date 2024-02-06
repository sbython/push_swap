/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:14:29 by msbai             #+#    #+#             */
/*   Updated: 2024/02/06 02:34:35 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "header.h"


int main (int ac, char **av)
{
    char *ptr;
    t_list *list;
    
    ptr = returnstr(ac, av);
    if (!checklist(ptr))
        return (0);
    list = fillstck(ptr);
    free(ptr);
    return (0);
}