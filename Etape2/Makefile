CC 	= 	gcc

NAME 	= 	not_mg

SRC 	= 	main.c			\
		alloc.c			\
		affichage.c		\
		deplacement.c		\
		movement.c		\
		interaction.c		\
		initialisation.c

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
