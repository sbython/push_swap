/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:14:19 by msbai             #+#    #+#             */
/*   Updated: 2024/03/18 22:59:41 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>

// this functions for check ererr
void	fr(long int t);
char	*returnstr(int ac, char **av);
char	*addspace(char *ptr);
int		checklist(char *str);
int		chakmiax(char *p, long int n);
void	ererr(void *str);
void	frfun(char **ptr);
int		checknbr(t_list *list, long int nbr);

// this functions for control the stack
t_list	*fillstack(char *str);
void	free_listarr(char **ptr);
int		if_sorted(t_list *p1);
char	*rm_zero(char *str);

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

//sort 3
int		maxnbr(t_list *stack);
void	sort3(t_list **s_a);

//sort 5
int		minnbr(t_list *s_a);
int		ft_index(t_list *s_a, int min);
void	sort5(t_list **s_a, t_list **s_b);

//sort 100
void	sort100(t_list **s_a, t_list **s_b);
void	fill_index(t_list **s_a, int *arr);
void	swap_in_arr(int *a, int *b);
int		find_index(t_list *a, int x, int p);
void	back_to_a(t_list **s_a, t_list **s_b);
int		get_i(t_list *s_a, int val);
int		i_arr(int *arr, int nbr, int len);

// tmp function
void	printf_list(char *msg, t_list *list);
void	print_index(char *msg, t_list *list);
#endif
