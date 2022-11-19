# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: garibeir < garibeir@student.42lisboa.com > +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/18 16:17:42 by garibeir          #+#    #+#              #
#    Updated: 2022/11/18 16:17:43 by garibeir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
SRC = ft_printf sources aux
CFLAGS = -Wextra -Wall -Werror
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(SRC:=.o)
	ar rcs $(NAME) $(SRC:=.o)

clean:
	rm -f $(SRC:=.o)
fclean:
	rm -f $(SRC:=.o) $(NAME)

re: fclean all

