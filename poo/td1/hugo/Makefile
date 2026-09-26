CXX = g++
CXX_FLAGS = -Wall -O1 -g
LD_FLAGS = -Wall -O1 -g

all: main

main: main.o Point.o
	$(CXX) $(LD_FLAGS) $^ -o $@

main.o: main.cpp Point.h
	$(CXX) $(CXX_FLAGS) -c main.cpp -o main.o

Point.o: Point.cpp Point.h
	$(CXX) $(CXX_FLAGS) -c Point.cpp -o Point.o

clean:
	rm -f main *.o

.PHONY: all clean