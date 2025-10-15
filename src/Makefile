CC=gcc
CFLAGS=-std=c99 -pedantic -Werror -Wall -Wextra -Wvla -fsanitize=address
SRCS=trad.c network.c
TARGET=trad network

all: ${TARGET}

network: ${SRCS}
	${CC} ${CFLAGS} network.c  -o $@

${TARGET}: ${SRCS}
	${CC} ${CFLAGS} ${SRCS} -o $@

clean:
	${RM} *.o ${TARGET}  
