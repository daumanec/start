all: topSecret

clean:
	rm topSecret.o topSecret

topSecret.o: topSecret.c
	gcc -c topSecret.c

topSecret: topSecret.o
	gcc topSecret.o -o topSecret