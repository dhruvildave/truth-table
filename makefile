
CC = g++
CCFLAGS = -g -Wall -Wextra -Wpedantic

objects = main.o binary.o tables.o

main: $(objects)
	$(CC) $(CCFLAGS) -o main.out $(objects)

main.o: src/main.cpp src/tables.hpp
	$(CC) $(CCFLAGS) -c src/main.cpp

tables.o: src/tables.cpp src/binary.hpp
	$(CC) $(CCFLAGS) -c src/tables.cpp

binary.o: src/binary.cpp src/logic.hpp
	$(CC) $(CCFLAGS) -c src/binary.cpp

clean:
	$(CC) $(CCFLAGS) -o main.out $(objects)
	rm $(objects)
