# -*- Makefile -*-

CC := gcc
CFLAGS := -Wall -Werror

all: RealEstate

RealEstate: main.o realEstateFunc.o
	$(CC) $(CFLAGS) main.o realEstateFunc.o -o RealEstate

realEstateFunc.o: realEstateFunc.c realEstate.h
	$(CC) $(CFLAGS) -c realEstateFunc.c

main.o: main.c realEstate.h
	$(CC) $(CFLAGS) -c main.c

clean:
	del *.o