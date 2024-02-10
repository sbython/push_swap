/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:14:19 by msbai             #+#    #+#             */
/*   Updated: 2024/02/10 13:31:15 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include "ft_printf/ft_printf.h"
# include "libft/libft.h"
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>

// this functions for check ererr
char	*returnstr(int ac, char **av);
char	*addspaic(char *ptr);
int		checklist(char *str);
int		chakmiax(char *p, long int n);
void	ererr(void);
int		checknbr(t_list *list, long int nbr);

// this functions for control the stack
t_list	*fillstack(char *str);
void	free_listarr(char **ptr);
// this is fucntion used to manipulate stack
void	swap(t_list **stack);
void	push(t_list **stack_a, t_list **stack_b);
void	rotate(t_list **stack);
void	re_rotate(t_list **stack);

//rules of push_swap
void	sab(t_list **s_a, t_list **s_b);
void	pab(int i, t_list **s_a, t_list **s_b);
void	rab(t_list **s_a, t_list **s_b);
void	rrab(t_list **s_a, t_list **s_b);

// tmp function
void	printf_list(char *msg, t_list *list);
#endif
