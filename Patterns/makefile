out: main.c patterns.o
	gcc patterns.o main.c -o main

patterns.o: patterns.c patterns.h
	gcc -c patterns.c

clean:
	del *.o

build:
	make
	make clean