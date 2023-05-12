##
## EPITECH PROJECT, 2023
## Lib makefile
## File description:
## makefile
##

CFLAGS  =       -I./include\

SRC     =       src/my_strlen.c\
		src/my_getnbr.c\
		src/my_put_nbr.c\
		src/my_strcat.c\
		src/my_strdup.c\
		src/my_putchar.c\
		src/my_putstr.c\
		src/my_strcmp.c\

OBJ     =       $(SRC:.c=.o)

NAME    =       libmy.a

all:    $(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

.PHONY: clean fclean
