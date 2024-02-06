/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkErerr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 03:40:22 by msbai             #+#    #+#             */
/*   Updated: 2024/02/06 02:39:39 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
char *addspaic(char *ptr)
{
    char *p;
    
    p = ft_strjoin(ptr, " ");
    free(ptr);
    return(p);
}
int ft_isnotvalid(char* str)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while(str[i])
    {
        if(str[i] == ' ')
            j++;
        i++;
    }
    if (j == i)
        return(1);
    return (0);
}
char *returnstr(int ac , char **av)
{
    int start;
    int i;
    char *ptr;
    char *tmp;
    
    ptr = NULL;
    i = 0;
    start = 1;
    while (start < ac)
    {
        tmp = ptr;
        if(ft_isnotvalid(av[start]))
            return(
            ft_printf("fill string with space or emty string is not valid\n")
            ,NULL);
        ptr = addspaic(ft_strjoin(ptr, av[start++]));
        free(tmp);
    }
    return (ptr);
}
int checklist(char *str)
{
    int i;
    char c;
    
    i = 0;
    if (!str)
        return (ft_printf("plz give me arguments\n"),0);
    while (str[i])
    {
        c = str[i];
        if((c == '-' || c == '+')   && !(str[i + 1] >='0' && str[i + 1] <= '9'))
            {
                ft_printf("have ererr here : %c\n", str + i - 1);
                return 0;
            }
        else if((c < '0' || c > '9') && !(c == '-' || c == '+' || c == ' '))
            {
                ft_printf("have ererr here : %c\n", str + i - 1);
                return 0;
            }
        i++;
    }
    return (1);
}
