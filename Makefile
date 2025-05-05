CC=gcc
CFLAGS=-I.

hellomake: test.o student.o hidden.o messing_around.o
	$(CC) -o test test.o student.o hidden.o messing_around.o
tryout: tryout.o student.o hidden.o messing_around.o
	$(CC) -o tryout tryout.o student.o hidden.o messing_around.o
clean:
	rm -rf *.o tryout test
