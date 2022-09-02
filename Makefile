# Makefile
all: add-nbo

add-nbo: file.o main.o stream.o
	g++ -o add-nbo file.o main.o stream.o

main.o: file.h stream.h main.cpp

file.o: file.h file.cpp

stream.o: stream.h stream.cpp

clean:
	rm -f add-nbo
	rm -f *.o
