##
## Makefile for libmy_01 in /home/bab/DEVC/Libmy/lemoin_a/libmy_01
## 
## Made by LE MOINE Adrien
## Login   <lemoin_a@etna-alternance.net>
## 
## Started on  Sat Oct  1 11:59:35 2016 LE MOINE Adrien
## Last update Tue Oct  4 14:03:59 2016 LE MOINE Adrien
##
CC		=	gcc
NAME_LIB	=	libmy.a
AR		=	ar r
SRC		=	my_putchar.c \
			my_isneg.c \
			my_put_nbr.c \
			my_swap.c \
			my_putstr.c \
			my_strlen.c \
			my_getnbr.c \
			my_strcpy.c \
			my_strncpy.c \
			my_strcmp.c \
			my_strncmp.c \
			my_strcat.c \
			my_strncat.c \
			my_strstr.c \
			my_strdup.c \
			my_strndup.c \
			my_str_to_wordtab.c
OBJ		=	$(SRC:%.c=%.o)
RM		=	rm -f
ARCH_LIB	=	ranlib
all		:	$(NAME_LIB)

$(NAME_LIB)	:	$(OBJ)
			$(AR) $(NAME_LIB) $(OBJ)
			$(ARCH_LIB) $(NAME_LIB)

clean		:
			$(RM) $(OBJ)

fclean		:	clean
			$(RM) $(NAME_LIB)

re		:	fclean all
