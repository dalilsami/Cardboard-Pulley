##
## Makefile for Cardboard Pulley in /home/bab/Projet_Poulet/lemoin_a/Etape3
## 
## Made by LE MOINE Adrien
## Login   <lemoin_a@etna-alternance.net>
## 
## Started on  Fri Jan 20 10:02:36 2017 LE MOINE Adrien
## Last update Fri Jan 20 13:13:43 2017 LE MOINE Adrien
##

CC 	= 	gcc

NAME 	= 	not_mg

SRC 	= 	main.c			\
		alloc.c			\
		affichage.c		\
		deplacement.c		\
		movement.c		\
		interaction.c		\
		initialisation.c	\
		guard.c			\
		coordonnee.c

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
