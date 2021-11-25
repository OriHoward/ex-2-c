CC = gcc
AR = ar
CFLAGS = -Wall -Werror

all: connections

connections: main.o libclassmat.a
	${CC} ${CFLAGS} -o connections main.o libclassmat.a

libclassmat.a: my_mat.o
	${AR} -rcs libclassmat.a my_mat.o

main.o: main.c my_mat.h
	${CC} ${CFLAGS} -c main.c

my_mat.o: my_mat.c my_mat.h
	${CC} ${CFLAGS} -c my_mat.c


clean:
	rm -f *.a *.o connections