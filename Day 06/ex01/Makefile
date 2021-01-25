##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	convert_temp.cpp	\

OBJ	=	$(SRC:.cpp=.o)

NAME	=	my_convert_temp

all:	$(NAME)

$(NAME):	$(OBJ)
	g++ -o $(NAME) -Wall -Wextra -Werror $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all