# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msbai <msbai@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/02 23:42:50 by msbai             #+#    #+#              #
#    Updated: 2023/12/02 23:42:50 by msbai            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
FUN = my_printf.c\
		putnbr.c\
		putchr.c\
		putstr.c\
		unputnbr.c\
		ft_hex.c\
		ft_strlen.c\
		ft_memcpy.c\
		ft_strdup.c\
		ft_hexp.c
	
OBJ = $(FUN:.c=.o)

all:$(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)
re: fclean all 

.PHONY: all re fclean clean