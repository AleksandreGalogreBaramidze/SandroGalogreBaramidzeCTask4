
CC=gcc
CFLAGS=-Wall 
LDLIBS = -lm
 
all : main_setbits
.PHONY : all
 

main_setbits: main_setbits.o
	$(CC) $(CFLAGS) -o setbits setbits.o $(LDLIBS)


main_setbits.o: setbits.c
	$(CC) $(CFLAGS) -c -o setbits.o setbits.c
 
 
.PHONY: clean
clean : 
	rm -rf *.o 
