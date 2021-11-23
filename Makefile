CC = gcc
CFLAGS = -Wall -Werror

all: connections

connections: main.o my_mat.o
	${CC} ${CFLAGS}  main.o my_mat.o -o connections

main.o: main.c my_mat.h
	${CC} ${CFLAGS} -c main.c

my_mat.o: my_mat.c my_mat.h
	${CC} ${CFLAGS} -c my_mat.c


clean:
	rm -f *.a *.o *.so connections