.PHONY: all clean flcean re

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror -g

SRCS := $(wildcard *.c)
OBJS := $(SRCS:%.c=%.o)

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

%.o: %.c libft.h
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -fv ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all