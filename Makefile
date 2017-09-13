CC=gcc
CFLAGS=-Wall
DEPS = list.h 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

list_make: main.o list.o
	gcc -o list_make main.o list.o 
