##
## Makefile for Cardboard Pulley in /home/bab/Projet_Poulet/lemoin_a/Etape1
## 
## Made by LE MOINE Adrien
## Login   <lemoin_a@etna-alternance.net>
## 
## Started on  Fri Jan 20 10:10:33 2017 LE MOINE Adrien
## Last update Fri Jan 20 10:10:35 2017 LE MOINE Adrien
##

CC 	= 	gcc

NAME 	= 	not_mg

SRC 	= 	main.c			\
		alloc.c			\
		affichage.c		\
		deplacement.c		\
		movement.c

OBJ 	= 	$(SRC:%.c=%.o)

FLAGS 	= 	-Wall -Werror -Wextra

RM	= 	rm -f

LIB	=	libmy.a

$(NAME)	:	$(SRC)
		$(CC) $(FLAGS) $(SRC) -o $(NAME) -L. $(LIB)

clean	:
		$(RM) $(OBJ)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean ALL

.PHONY	:	ALL fclean clean re

ALL	:	$(NAME)
