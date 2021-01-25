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

SRC	=	main.cpp	        \
        ../Object.cpp	    \
        ../Wrap.cpp	        \
        ../GiftPaper.cpp	\
        ../Box.cpp	        \
        ../LittlePony.cpp	\
        ../Teddy.cpp	    \
        ../Toy.cpp          \
        ../ConveyorBelt.cpp \
        ../PapaXmasTable.cpp\
        ../PapaXmasElf.cpp      \


NAME	=	part4

OBJ	=	$(SRC:.cpp=.o)

CXXFLAGS	=	-Wall -Wextra -std=c++11

$(NAME):	$(OBJ)
		@clang++  -o $(NAME) $(OBJ) $(LDFLAGS) $(OFLAGS)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean	all