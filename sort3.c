/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 08:55:53 by msbai             #+#    #+#             */
/*   Updated: 2024/03/10 17:31:40 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int maxnbr(t_list *stack)
{
    int max;
    
    if(!stack)
        return (0);
    max = stack->content;
    while (stack)
    {
        if(max < stack->content)
            max = stack->content;
        stack = stack->next;
    }
    return (max);
}

int get_i(t_list *s_a, int val)
{
    int i;

    i = 0;
    while (s_a)
    {
        if (s_a->content == val)
            return (i);
        i++;
        s_a = s_a->next;
    }
    return (-1);
}
void back_to_a(t_list **s_a,t_list **s_b)
{
    int max;
    int len;
    int index;

    len = ft_lstsize(*s_b);
    max = maxnbr (*s_b);
    index = get_i(*s_b, max);

    while (len)
    {
        if((*s_b)->content == max)
        {
            pab(0, s_a, s_b);
            len--;
            max = maxnbr (*s_b);
            index = get_i(*s_b, max);
        }
        else if (index < len / 2)
            rab(NULL, s_b);
        else
            rrab(NULL, s_b);
    }
    
}
void sort3(t_list **s_a)
{
    int max;
    max = maxnbr(*s_a);
    if(max == (*s_a)->content)
        rab(s_a,NULL);
    else if(max == (*s_a)->next->content)
        rrab(s_a,NULL); 
    if ((*s_a)->content > (*s_a)->next->content)
        sab(s_a,NULL);
}