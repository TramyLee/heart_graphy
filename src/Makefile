TARGET=heart1.exe 
OBJECTS=heart1.o
CC=g++
CFLAGS=-O3

heart1.o:heart1.cpp
	g++ -o ($OBJECTS) heart1.cpp
#($TARGET):heart1.o
	#g++ -o ($TARGET)  heart1.o


.PHONY:clean
clean:
	del ($OBJECTS)
