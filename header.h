/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:14:19 by msbai             #+#    #+#             */
/*   Updated: 2024/02/05 03:27:27 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include "ft_printf/ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


// this functions for check ererr
char    *returnstr(int ac , char **av);
char *addspaic(char *ptr);
int checklist(char *str);

// this functions for control the stack
t_list *fillstck(char *str);
int checknbr(t_list * list, long int nbr);
#endif
