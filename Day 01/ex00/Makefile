##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	z.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	z

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) -std=gnu11 -Wall -Wextra $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all