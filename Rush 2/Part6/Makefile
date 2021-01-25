##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC		=		main.cpp							\
				XML_handling/XMLParser.cpp			\
				../lib/pugixml-1.11/src/pugixml.cpp	\


RM		=		rm -fr

NAME	=		part6

OBJ		=		$(SRC:.cpp=.o)

CFLAGS	=		-Wall -Werror -Wextra

$(NAME):	$(OBJ)
			@clang++ -std=c++11 -o $(NAME) $(OBJ) $(CFLAGS)

all:		$(NAME)

clean:
			@$(RM) *~
			@$(RM) *.o

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all