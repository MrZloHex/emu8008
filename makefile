make:
	gcc -Wall -c tui.c -lncurses
	gcc -Wall -c main.c
	gcc -o 8008 tui.o main.o -lncurses
	rm *.o
	./8008
	rm 8008
