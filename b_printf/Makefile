CC = gcc
NAME = printf.a
CFLAGS = -Wall -Werror -Wextra
FILES = ./ft_atoib.c ./ft_printf.c ./ft_putabsl.c ./ft_putnbr.c ./ft_putstr.c ./ft_putchar.c
OBJ = ./ft_atoib.o ./ft_printf.o ./ft_putabsl.o ./ft_putnbr.o ./ft_putstr.o ./ft_putchar.o
$(NAME): 
		$(CC) $(CFLAGS) -c $(FILES) -I ft_printf.h
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
