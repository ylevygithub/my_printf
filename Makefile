##
## EPITECH PROJECT, 2018
## makefile
## File description:
## makefile
##

SRC	=	my_putstr.c	\
		my_putchar.c	\
		my_put_nbr.c	\
		printf.c	\
		my_putnbr_base.c	\
		my_revstr.c	\
		my_put_nbr_long.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
