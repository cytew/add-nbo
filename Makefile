#Makefile

all : add-nbo

add-nbo : file_read.o main.o 
	g++ -o add-nbo file_read.o main.o


	
main.o : file_read.h main.cpp

file_read.o : file_read.h file_read.cpp

clean : 
	rm -f add-nbo 
	rm -f *.o
