
CC=gcc
CFLAGS=-Wall 
LDLIBS = -lm
 
all : main_index
.PHONY : all
 

main_index: main_index.o
	$(CC) $(CFLAGS) -o index index.o $(LDLIBS)


main_index.o: index.c
	$(CC) $(CFLAGS) -c -o index.o index.c
 
 
.PHONY: clean
clean : 
	rm -rf *.o 
