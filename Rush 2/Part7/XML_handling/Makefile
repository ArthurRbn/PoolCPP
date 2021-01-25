##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	main_client.cpp	    \
        ../../Object.cpp	    \
        ../../Wrap.cpp	        \
        ../../GiftPaper.cpp	\
        ../../Box.cpp	        \
        ../../LittlePony.cpp	\
        ../../Teddy.cpp	    \
        ../../Toy.cpp          \
        ../../ConveyorBelt.cpp \
        ../../PapaXmasTable.cpp\
        ../../PapaXmasElf.cpp  \
        ../../TableRand.cpp    \
        ../../lib/pugixml-1.11/src/pugixml.cpp	\
        xmlGift.cpp         \


RM		=		rm -fr

NAME	=		warpMachine

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