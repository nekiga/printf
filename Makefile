CC = gcc
SRC = ft_printf sources aux
CFLAGS = -Wextra -Wall -Werror
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(SRC:=.o)
	make -C libft
	cp libft/libft.a .
	mv libft.a $(NAME)
	ar rcs $(NAME) $(SRC:=.o)

clean:
	make clean -C libft
	rm -f $(SRC:=.o)
fclean:
	make fclean -C libft
	rm -f $(SRC:=.o) $(NAME)

re: fclean all

