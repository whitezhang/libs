CC = clang
CFLAGS = -std=c++11 -Wall

all: main

main: main.o singleton.o concrete_handler.o
	$(CC) $(CFLAGS) main.o singleton.o concrete_handler.o -o main -lstdc++

singleton.o: singleton.cpp singleton.h
	$(CC) $(CFLAGS) -c singleton.cpp

concrete_handler.o: concrete_handler.cpp concrete_handler.h handler.h
	$(CC) $(CFLAGS) -c concrete_handler.cpp

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

clean:
	rm -f *.o main

