CC=gcc
CFLAGS=-Wall 
LDLIBS = -lm
 
all : main_converter
.PHONY : all
 

main_converter: main_converter.o
	$(CC) $(CFLAGS) -o converter converter.o $(LDLIBS)


main_converter.o: converter.c
	$(CC) $(CFLAGS) -c -o converter.o converter.c
 
 
.PHONY: clean
clean : 
	rm -rf *.o 
