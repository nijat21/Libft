.PHONY: all clean flcean re

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS := $(wildcard *.c)
OBJS := $(SRCS:%.c=%.o)

all: ${NAME}

${NAME}: ${OBJS}
	@echo "Creating libary..."
	ar rcs ${NAME} ${OBJS}

%.o: %.c
	@echo "Checking.."
	${CC} ${CFLAGS} -c $< -o $@

clean:
	@echo "Cleaning up..."
	rm -rvf *.o ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all