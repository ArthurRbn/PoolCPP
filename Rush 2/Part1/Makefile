##
## EPITECH PROJECT, 2021
## rush2
## File description:
## Makefile
##

REDDARK=\033[31;2m
RED=\033[31;1m
GREEN=\033[32;1m
YEL=\033[33;1m
BLUE=\033[34;1m
PINK=\033[35;1m
CYAN=\033[36;1m
RES=\033[0m

SRC	=	main.cpp            \
        ../LittlePony.cpp   \
        ../Object.cpp       \
        ../Teddy.cpp        \
        ../Toy.cpp


NAME	=	part1

OBJ	=	$(SRC:.cpp=.o)

$(NAME):	$(OBJ)
	g++ -Wall -Wextra -Werror -g -o  $(NAME) $(OBJ)
	@echo -e "$(RED)$(NAME) $(GREEN)[✘]$(RES)"

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean	all