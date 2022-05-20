
CC=gcc
CFLAGS=-Wall 
LDLIBS = -lm
 
all : main_squeeze
.PHONY : all
 

main_squeeze: main_squeeze.o
	$(CC) $(CFLAGS) -o squeeze squeeze.o $(LDLIBS)


main_squeeze.o: squeeze.c
	$(CC) $(CFLAGS) -c -o squeeze.o squeeze.c
 
 
.PHONY: clean
clean : 
	rm -rf *.o 
