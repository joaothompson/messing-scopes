CC=gcc
CFLAGS=-I.

hellomake: test.o student.o hidden.o messing_around.o
	$(CC) -o test test.o student.o hidden.o messing_around.o
clean:
	rm -rf student.o test test.o hidden.o messing_around.o
