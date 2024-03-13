/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:07:12 by msbai             #+#    #+#             */
/*   Updated: 2024/03/10 17:36:20 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int minnbr(t_list *stack)
{
    int min;
    
    if(!stack)
        return (0);
    min = stack->content;
    while (stack)
    {
        if(min > stack->content)
            min = stack->content;
        stack = stack->next;
    }
    return (min);
}
int ft_index(t_list *stack , int min)
{
    int index;
    
    index = 0;
    while (stack)
    {
        if(min == stack->content)
            return index;
        stack = stack->next;
        index++;
    }
    return index;
}

void sort5(t_list **s_a,t_list **s_b)
{
    int min;
    int index;
    int size;
    min = minnbr(*s_a);
    index = ft_index(*s_a, min);
    size = ft_lstsize(*s_a);
    while (size > 3)
    {
        if (index ==  0)
            pab(1,s_a, s_b);
        else if(size / 2 >= index)
            rab(s_a, NULL);
        else if(size / 2 < index)
            rrab(s_a, NULL);
        min = minnbr(*s_a);
        index = ft_index(*s_a, min);
        size = ft_lstsize(*s_a);
    }
    sort3(s_a);
    pab(0,s_a, s_b);
    pab(0,s_a, s_b);
}
