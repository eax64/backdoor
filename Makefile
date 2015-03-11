##
## Makefile for  in /home/eax/cq/bla/backdoor
## 
## Made by eax
## Login   <soules_k@epitech.net>
## 
## Started on  Wed Mar 11 22:23:54 2015 eax
## Last update Wed Mar 11 23:01:46 2015 eax
##

CC	=	gcc
CFLAGS	=	-W -Wall -Wextra --std=gnu99 -I.

SRC	=	auth.c tests/test.c
OBJ	=	$(SRC:.c=.o)

NAME	=	auth

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean re
