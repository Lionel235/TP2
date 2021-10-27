main : main.o alea.o tri.o io.o
	gcc -o main main.o alea.o tri.o io.o
	
main.o : main.c alea.h tri.h io.h
	gcc -c main.c
	
alea.o : alea.c alea.h
	gcc -c alea.c
	
tri.o : tri.c tri.h
	gcc -c tri.c

io.o : io.c io.h
	gcc -c io.c
	

	
