##
## Makefile for  in /home/eax/cq/bla/backdoor
## 
## Made by eax
## Login   <soules_k@epitech.net>
## 
## Started on  Wed Mar 11 22:23:54 2015 eax
## Last update Thu Mar 12 03:40:46 2015 eax
##

CC	=	gcc
CFLAGS	+=	-W -Wall -Wextra --std=gnu99 -I.

TEST_SRC=	tests/test.c \
		tests/test_user.c \
		tests/test_group.c \
		tests/group.c \
		tests/user.c

# You won't have this code
AUTH_SRC=	auth_src/auth.c

EXPL_SRC=	auth.c

SRC	=	$(TEST_SRC)

ifeq ($(with-implementation),1)
	SRC += $(AUTH_SRC)
else
	SRC += $(EXPL_SRC)
endif

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
