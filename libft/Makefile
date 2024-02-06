# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msbai <msbai@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 10:46:25 by msbai             #+#    #+#              #
#    Updated: 2023/11/23 11:10:49 by msbai            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
CC  = cc
CFLAGS = -Wall -Wextra -Werror
FU = ft_bzero \
      	ft_isascii \
		ft_memcpy \
		ft_strlcat \
       	ft_strrchr \
		ft_isalnum \
       	ft_isdigit \
       	ft_memset \
       	ft_strlcpy \
       	ft_tolower \
		ft_isalpha \
		ft_isprint \
      	ft_strchr \
		ft_strlen \
		ft_toupper \
		ft_calloc \
		ft_memmove \
		ft_atoi	\
		ft_strnstr \
		ft_strncmp \
		ft_memchr \
		ft_memcmp \
		ft_strdup \
		ft_substr \
		ft_strjoin \
		ft_itoa \
		ft_strtrim \
		ft_strmapi \
		ft_split\
		ft_putchar_fd \
		ft_putstr_fd \
		ft_putendl_fd \
		ft_putnbr_fd \
		ft_striteri 
		
FUN = $(FU:=.c)
OBJ = $(FU:=.o)

BONUS = ft_lstnew_bonus\
			ft_lstadd_front_bonus\
			ft_lstsize_bonus \
			ft_lstlast_bonus\
			ft_lstadd_back_bonus \
			ft_lstdelone_bonus \
			ft_lstclear_bonus
BONUSFUN = $(BONUS:=.c)
BONUSOBJ = $(BONUS:=.o)
all: $(NAME)

$(NAME):$(OBJ) 
	ar rcs $(NAME) $(OBJ) 

bonus:$(BONUSOBJ)

$(BONUSOBJ):$(BONUSFUN)
	$(CC) $(CFLAGS) -c $(BONUSFUN)
	ar rcs $(NAME) $(BONUSOBJ) 
clean:
	@rm -rf $(OBJ) $(BONUSOBJ)

fclean: clean
	@rm -rf $(NAME)
re: fclean all 
.PHONY: all re fclean clean	
