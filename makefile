make:
	gcc -Wall -c tui.c -lncurses  
	gcc -Wall -c cpu.c
	gcc -Wall -c main.c
	gcc -o 8008 tui.o cpu.o main.o -lncurses
	rm *.o
	./8008
	rm 8008
