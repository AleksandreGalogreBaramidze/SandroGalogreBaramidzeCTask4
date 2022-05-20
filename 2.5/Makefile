
CC=gcc
CFLAGS=-Wall 
LDLIBS = -lm
 
all : main_search
.PHONY : all
 

main_search: main_search.o
	$(CC) $(CFLAGS) -o search search.o $(LDLIBS)


main_search.o: search.c
	$(CC) $(CFLAGS) -c -o search.o search.c
 
 
.PHONY: clean
clean : 
	rm -rf *.o 
