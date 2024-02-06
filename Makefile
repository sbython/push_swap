# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msbai <msbai@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/02 15:14:27 by msbai             #+#    #+#              #
#    Updated: 2024/02/05 03:39:12 by msbai            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

ARCHIV = libft/libft.a ft_printf/libftprintf.a

		
NAME = push_swap
MANIFILE = push_swap.c
CFILE = checkErerr.c\
		 fillstack.c


all:$(NAME)

$(NAME):$(CFILE) $(MANIFILE) $(ARCHIV)
	@$(CC)  $(MANIFILE) $(CFILE) $(ARCHIV)  -o $@
	@echo "push_swap is ready🧑"


$(ARCHIV):
	@$(MAKE) -s -C ./libft
	@$(MAKE) -s -C ./libft bonus
	@$(MAKE) -s -C ./ft_printf
	@echo "I created your  library🧑"


clean:
	@$(MAKE) -s -C ./libft clean
	@$(MAKE) -s -C ./ft_printf clean
	@echo "I cleaned your  library  🧑"
fclean: clean
	@rm -rf $(NAME) 
	@$(MAKE) -s -C ./libft fclean 
	@$(MAKE) -s -C ./ft_printf fclean
	@echo "I cleaned all🧑"
re: fclean all

.PHONY: