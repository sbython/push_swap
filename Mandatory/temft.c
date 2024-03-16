/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 15:56:29 by msbai             #+#    #+#             */
/*   Updated: 2024/03/16 03:39:37 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int indexInArr(int *arr, int nbr, int len)
{
    int i;

    i = 0;
    while(arr[i] != nbr && i < len )
        i++;
    
    return (i);
}

void fill_index(t_list **s_a, int *arr)
{
    t_list *tmp;
    int len;

    len = ft_lstsize(*s_a);
    tmp = *s_a;
    while(tmp)
    {
        tmp->index = indexInArr(arr, tmp->content , len);
        tmp = tmp->next;
    }
 
}

void swap_in_arr(int *a,int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
int	find_index(t_list *s_a, int x, int p)
{
	int	i;

	i = 0;
	while (s_a)
	{
		if (s_a->index <= x || s_a->index <= x + p)
			break ;
		i++;
		s_a = s_a->next;
	}
	return (i);
}
// void best_mv(t_list **s_a,t_list **s_b, int i, int p)
// {
//     int index;
//     int len;

//     index = find_index(*s_a, i, p);
//     len = ft_lstsize(*s_a) / 2;
//     while (*s_a)
//     {
//         if((*s_a)->index <= i || (*s_a)->index <= i + p)
//         {
//             pab(1, s_a, s_b);
//             return ;       
//         }
//         else if (index <= len)
//             rab(s_a, NULL);
//         else
//             rrab(s_a, NULL);
//     }
    
// }

char    *rm_zero(char *str)
{
    int i;
    char *ptr;
    char c;
    i = 0;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (str[i] == '0' && str[i])
        i++;
    
    ptr = ft_substr(str, i, ft_strlen(str));
    ft_printf("%s", ptr);
    if(!ptr)
    {
        printf("sorry");
    }
    return (ptr);
}