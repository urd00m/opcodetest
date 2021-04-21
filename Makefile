CC=gcc
CFLAGS=-O2 -Wall

testmake: test.o op.o
	$(CC) -o test.out test.c op.S

clean: 
	rm -f test.o test.out op.o
