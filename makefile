
CC = g++
CCFLAGS = -g -Wall -Wextra -Wpedantic

objects = main.o binary.o tables.o

main: $(objects)
	$(CC) $(CCFLAGS) -o main.out $(objects)

main.o: main.cpp tables.hpp
	$(CC) $(CCFLAGS) -c main.cpp

tables.o: tables.cpp binary.hpp
	$(CC) $(CCFLAGS) -c tables.cpp

binary.o: binary.cpp logic.hpp
	$(CC) $(CCFLAGS) -c binary.cpp

clean:
	$(CC) $(CCFLAGS) -o main.exe $(objects)
	rm $(objects)
