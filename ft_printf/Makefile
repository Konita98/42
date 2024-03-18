NAME = libftprintf.a 
cc=cc
CFLAGS = -Wall -Werror -Wextra
AR = ar -rcs
SRC = ft_printf.c ft_putchar.c ft_putnbr.c ft_putnbr_hexa.c ft_putstr.c ft_strlen.c ft_toupper.c ft_itoa.c ft_print_char.c

all: $(NAME)
OBJ = $(SRC:.c=.o)

%.o: %.c
	cc $(CFLAGS) -c $(SRC)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
.PHONY: all clean fclean re

