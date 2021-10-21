# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/08 23:07:39 by aconchit          #+#    #+#              #
#    Updated: 2021/10/12 15:13:36 by aconchit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
C_FILES = ft_atoi.c ft_isdigit.c ft_memchr.c ft_putendl_fd.c \
ft_striteri.c ft_strncmp.c ft_toupper.c ft_bzero.c ft_isprint.c  \
ft_memcmp.c ft_putnbr_fd.c ft_strjoin.c ft_strnstr.c ft_calloc.c ft_itoa.c \
ft_memcpy.c ft_putstr_fd.c ft_strlcat.c ft_strrchr.c ft_isalnum.c \
ft_memmove.c ft_split.c ft_strlcpy.c ft_strtrim.c \
ft_isalpha.c ft_memset.c ft_strchr.c ft_strlen.c \
ft_substr.c ft_isascii.c ft_putchar_fd.c ft_strdup.c \
ft_strmapi.c ft_tolower.c
CC = gcc -Wall -Wextra -Werror -c

B_FILES = ft_lstadd_front.c ft_lstnew.c ft_lstdelone.c \
ft_lstiter.c ft_lstlast.c ft_lstadd_back.c ft_lstmap.c \
ft_lstclear.c ft_lstsize.c

all: $(NAME)

.c.o:
	$(CC) $< -o $@

$(NAME): $(C_FILES:.c=.o)
	ar rcs $(NAME) $(C_FILES:.c=.o)

bonus: $(C_FILES:.c=.o) $(B_FILES:.c=.o)
	ar rcs $(NAME) $(C_FILES:.c=.o) $(B_FILES:.c=.o)

clean:
	rm -rf $(C_FILES:.c=.o) $(B_FILES:.c=.o)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
	