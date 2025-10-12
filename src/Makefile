CC=gcc
CFLAGS=-std=c99 -pedantic -Werror -Wall -Wextra -Wvla -fsanitize=address
SRCS=trad.c
TARGET=trad

all: ${TARGET}

${TARGET}: ${SRCS}
	${CC} ${CFLAGS} ${SRCS} -o $@

clean:
	${RM} *.o ${TARGET}  
