all: eat 

eat: eat.o
	gccx -o eat eat.o -lm

eat.o: eat.c
	gccx -c eat.c -lm

