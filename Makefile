##
## EPITECH PROJECT, 2017
## File description:
## Makefile
##

SRCC = ./src/

SRC	=	$(SRCC)minishell1.c	\
		$(SRCC)error_gestion.c	\
		$(SRCC)init_value.c	\
		$(SRCC)main.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Iinclude -g

LDFLAGS	=	-lm -Llib/my/ -lmy

NAME	=	mysh

$(NAME):	 $(OBJ)
	make -C lib/my
	gcc -o $(NAME) $(OBJ) $(LDFLAGS)

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
