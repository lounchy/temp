# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbelinsk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/16 11:53:35 by dbelinsk          #+#    #+#              #
#    Updated: 2019/11/16 18:16:22 by dbelinsk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Werror -Wextra

SRC = $(shell find . -name '*.c' | grep -v 'bonus')
OBJ = $(patsubst %.c,%.o,$(SRC))

B_SRC = $(shell find . -name '*bonus.c')
B_OBJ = $(patsubst %.c,%.o,$(B_SRC))

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) -c $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

bonus:
	@gcc $(FLAGS) -c $(B_SRC)
	@ar rc $(NAME) $(B_OBJ)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJ) $(B_OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
