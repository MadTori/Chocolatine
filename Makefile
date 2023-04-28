##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

CFLAGS	=	-I./include

SRC	=	src/main.c\
		src/handle_error.c\
		src/display.c\

OBJ	=	$(SRC:.c=.o)

NAME	=	hangman

all:	$(NAME)

sub:
	cd lib/my && $(MAKE)

$(NAME): sub	$(OBJ)
	$(CC) -g3 $(SRC) $(CFLAGS) -L./lib/my -lmy -o $(NAME)

clean:
	rm -f $(OBJ) *.gcda *.gcdo

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean re sub
