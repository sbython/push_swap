# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msbai <msbai@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/02 15:14:27 by msbai             #+#    #+#              #
#    Updated: 2024/03/19 05:07:04 by msbai            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror 

RED=\e[31m
GREEN=\e[32m
WHITE=\033[0m

ARCHIV = libft/libft.a ft_printf/libftprintf.a


NAME = push_swap
CFILE = ./Mandatory/push_swap.c
FILESC = ./Mandatory/checkErerr.c\
			./Mandatory/fillstack.c\
			./Mandatory/ft_mouves.c\
			./Mandatory/ft_rules.c\
			./Mandatory/sort3.c\
			./Mandatory/sort5.c\
			./Mandatory/sort100.c\
			./Mandatory/temft.c\
			./Mandatory/printlist.c
			
NAMEBONUS = checker
MAIN = bonus/main.c

BONUS_SRC = ./bonus/checkErerr.c \
            ./bonus/fillstack.c \
            ./bonus/ft_mouves.c \
            ./bonus/get_next_line_utils.c \
            ./bonus/get_next_line.c\
			./bonus/tmpft.c\
			./bonus/check_move.c

OBJ= $(FILESC:.c=.o)
BOBJ= $(BONUS_SRC:.c=.o)

all:$(NAME)

$(NAME):$(CFILE) $(OBJ) $(ARCHIV)
	@$(CC)  $(CFILE) $(OBJ)  $(ARCHIV)  -o $@
	@echo "$(GREEN)push_swap is ready 🧑$(WHITE)\n"


bonus: $(FILEBONUS) $(ARCHIV) $(MAIN) $(NAMEBONUS) 

$(NAMEBONUS): $(MAIN) $(BOBJ) $(ARCHIV)
	@$(CC) $(MAIN) $(BOBJ) $(ARCHIV) -o $@
	@echo "$(GREEN)checker is ready 🧑$(WHITE)\n"


$(ARCHIV):
	@$(MAKE) -s -C ./libft
	@$(MAKE) -s -C ./libft bonus
	@$(MAKE) -s -C ./ft_printf
	@echo "$(GREEN)I created your  library 🧑$(WHITE)"


clean:
	@$(MAKE) -s -C ./libft clean
	@$(MAKE) -s -C ./ft_printf clean
	@echo "$(RED)I cleaned your  library 🧑$(WHITE)"
	@rm -rf ./bonus/*.o ./Mandatory/*.o
fclean: clean
	@rm -rf $(NAME) 
	@rm -rf $(NAMEBONUS) 
	@$(MAKE) -s -C ./libft fclean 
	@$(MAKE) -s -C ./ft_printf fclean
	@echo "$(RED)I cleaned all 🧑$(WHITE)\n"
re: fclean all

.PHONY: