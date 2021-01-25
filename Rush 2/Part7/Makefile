##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC		=

RM		=		rm -fr

NAME	=		parser

OBJ		=		$(SRC:.cpp=.o)

CFLAGS	=		-Wall -Werror -Wextra

$(NAME):	$(OBJ)
			cd UDP_handling && make;
			cd XML_handling && make;

all:		$(NAME)

clean:
			@$(RM) *~
			@$(RM) *.o

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all