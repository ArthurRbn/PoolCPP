##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	string.c	\
		assign_append.c	\
		string_compare.c	\
		find.c	\
		string_split.c	\
		string_join.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	match

NAS	=	libstring.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAS) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME) $(NAS)

re:	fclean all
