/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 23:56:37 by msbai             #+#    #+#             */
/*   Updated: 2024/03/19 05:12:23 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>

// start get next line
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

char	*get_next_line(int fd);
char	*ft_strjoin2(char *s1, char *s2);
char	*ft_strjoin1(char *str);
size_t	ft_strlen1(const char *s);
char	*ft_strchr1(const char *s, int c);
void	*ft_memcpy1(void *dest, const void *src, size_t n);
char	*rm_zero(char *str);
// end get next line

//checkErerr.c
void	ererr(void *str);
char	*addspace(char *ptr);
int		ft_isnotvalid(char *str);
char	*returnstr(int ac, char **av);
int		checklist(char *str);

// fillstack.c
int		if_sorted(t_list *p1);
void	free_listarr(char **ptr);
int		chakmiax(char *p, long int n);
int		checknbr(t_list *list, long int nbr);
t_list	*fillstack(char *str);

// ft_mouves.c
void	frfun(char **ptr);
void	swap(t_list **stack);
void	push(t_list **stack_a, t_list **stack_b);
void	rotate(t_list **stack);
void	re_rotate(t_list **stack);

//ft_rules.c
void	sab(t_list **s_a, t_list **s_b);
void	pab(int i, t_list **s_a, t_list **s_b);
void	rab(t_list **s_a, t_list **s_b);
void	rrab(t_list **s_a, t_list **s_b);

//check_move
int		check_rule(char *str);
void	funfor2(t_list **a, t_list **b, int n);
void	do_it(t_list **a, t_list **b, char *str);
void	check_move(t_list **a, t_list **b);
//rmpft.c
void	printf_list(char *msg, t_list *list);
void	fr(long int t);
char	*rm_zero(char *str);

#endif