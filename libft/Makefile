# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/08 23:07:39 by aconchit          #+#    #+#              #
#    Updated: 2021/10/08 23:07:41 by aconchit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
C_FILES = *.c
CC = gcc -Wall -Wextra -Werror -c
CLIB = ar rc $(NAME)
RLIB = ranlib $(NAME)

all: $(NAME)

$(NAME): $(C_FILES)
	$(CC) $(C_FILES)
	$(CLIB) $(C_FILES:.c=.o)
	$(RLIB)

clean:
	rm -rf $(C_FILES:.c=.o)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
	