SOURCEFILES	= $(wildcard *.c)
OBJECTS	= ${SOURCEFILES:.c=.o}
NAME	= do-op
COMPILER		= cc
RM		= rm -f
FLAGS	= -Wall -Wextra -Werror

all: ${NAME}


${NAME} : ${OBJECTS}
	@echo ${SOURCEFILES}
	${COMPILER} -o $@ $^

%.o : %.c
	${COMPILER} -c $< -o $@

clean:
	${RM} ${OBJECTS}

fclean: clean
	${RM} ${NAME}

re: fclean all