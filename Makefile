# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msbai <msbai@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/02 15:14:27 by msbai             #+#    #+#              #
#    Updated: 2024/03/08 16:43:02 by msbai            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror #-fsanitize=adress

RED=\e[31m
GREEN=\e[32m
WHITE=\033[0m

ARCHIV = libft/libft.a ft_printf/libftprintf.a

		
NAME = push_swap
MANIFILE = push_swap.c
CFILE = checkErerr.c\
			fillstack.c\
			ft_mouves.c\
			ft_rules.c\
			sort3.c\
			sort5.c\
			sort100.c\
			temft.c

all:$(NAME)

$(NAME):$(CFILE) $(MANIFILE) $(ARCHIV)
	@$(CC)  $(MANIFILE) $(CFILE) printlist.c $(ARCHIV)  -o $@
	@echo "$(GREEN)push_swap is ready 🧑$(WHITE)\n"


$(ARCHIV):
	@$(MAKE) -s -C ./libft
	@$(MAKE) -s -C ./libft bonus
	@$(MAKE) -s -C ./ft_printf
	@echo "$(GREEN)I created your  library 🧑$(WHITE)"


clean:
	@$(MAKE) -s -C ./libft clean
	@$(MAKE) -s -C ./ft_printf clean
	@echo "$(RED)I cleaned your  library 🧑$(WHITE)"
fclean: clean
	@rm -rf $(NAME) 
	@$(MAKE) -s -C ./libft fclean 
	@$(MAKE) -s -C ./ft_printf fclean
	@echo "$(RED)I cleaned all 🧑$(WHITE)\n"
re: fclean all

.PHONY: