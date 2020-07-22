# Make C-Array-phonebook

.PHONY = clean all
CC := gcc

all: arrays_01 arrays_02 arrays_03 arrays_04

arrays_01 : arrays_01.o
arrays_01.o : arrays_01.c

arrays_02 : arrays_02.o
arrays_02.o : arrays_02.c

arrays_03 : arrays_03.o
arrays_03.o : arrays_03.c

arrays_04 : arrays_04.o
arrays_04.o : arrays_04.c

clean :
	rm -f *.o arrays_01 arrays_02 arrays_03 arrays_04
