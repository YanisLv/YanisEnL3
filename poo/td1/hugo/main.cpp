#include "Point.h"
#include <iostream>





int main(){
    Point p1(1.4,2.5);
    Point p2(4.4,5.0);

    p1.print();
    p2.print();

    std::cout << p1.distance(4.4,5.0) << "\n";

    Point p3 = p1.center(p2);
    p3.print();
;
    return 0;
}






























/*
BINDIR = bin
BLDDIR = build
INCDIR = include
LIBDIR = lib
SRCDIR = src

CXX = g++
CXX_FLAGS = -Wall -O1 -g -I$(INCDIR)
LD_FLAGS = -Wall -O1 -g

all: $(BINDIR)/main

$(BINDIR)/main: $(BLDDIR)/main.o $(BLDDIR)/Point.o
$(CXX) $(LD_FLAGS) $^ -o $@

$(BLDDIR)/main.o: $(SRCDIR)/main.cpp
$(CXX) $(CXX_FLAGS) -c $^ -o $@ -c
$(CXX) $(CXX_FLAGS) $(SRCDIR)/test.cpp -o $(BLDDIR)/test.o

$(BLDDIR)/Point.o: $(SRCDIR)/Point.cpp
$(CXX) $(CXX_FLAGS) -c $^ -o $@ -c



./bin/main


*/