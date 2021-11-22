CC = gcc
CFLAGS = -Wall -Werror

all: connections, mat

mat: libclassmat.so

connections: main.o libclassmat.so
	${CC} ${CFLAGS} main.o -L . -lclassmat -o connections

libclassmat.so: my_mat.o
		${CC} ${CFLAGS} -shared my_mat.o -o libclassmat.so


main.o: main.c my_mat.h
	${CC} ${CFLAGS} -c main.c

my_mat.o: my_mat.c
	${CC} ${CFLAGS} -fPIC -c my_mat.c


clean:
	rm -f *.a *.o *.so mains