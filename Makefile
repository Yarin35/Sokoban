##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## l
##

SRC	=	lib/my/my_putstr.c			\
		lib/my/my_strlen.c			\
		lib/my/my_strcmp.c			\
		lib/my/my_info.c			\
		lib/my/my_strcpy.c			\
		lib/my/my_strncpy.c			\
		lib/my/my_str_to_word_array.c		\
		lib/my/my_calloc.c			\
		\
		lib/my/my_game.c			\
		lib/my/my_map_creator.c			\
		lib/my/my_interactions.c		\
		lib/my/my_struct_initialiser.c		\
		lib/my/reset_map.c			\
		lib/my/game_checker.c			\
		lib/my/iswin.c				\
		lib/my/islost.c				\
		lib/my/free_game.c

OBJ	=	$(SRC:.c=.o)

NAME	=	ylib.a

CFLAGS	=	-Wall -Werror -Wextra -g
CFLAGS 	+=	-lncurses

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	gcc -o my_sokoban main.c $(CFLAGS)  ylib.a

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f my_sokoban

re:	fclean all

.PHONY:	all clean fclean re
