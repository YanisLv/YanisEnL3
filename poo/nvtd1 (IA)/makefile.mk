BINDIR = bin
BLDDIR = build
INCDIR = include
SRCDIR = src

CXX = g++

CXX_FLAGS = -Wall -O1 -g -I./$(INCDIR)
LD_FLAGS = -Wall -O1 -g

all: $(BINDIR)/test

$(BINDIR)/test: $(BLDDIR)/test.o $(BLDDIR)/Point.o
	$(CXX) $(LD_FLAGS) $^ -o $@

$(BLDDIR)/test.o: test.cpp $(INCDIR)/Point.h
	$(CXX) $(CXX_FLAGS) $< -o $@ -c

$(BLDDIR)/Point.o: $(SRCDIR)/Point.cpp $(INCDIR)/Point.h
	$(CXX) $(CXX_FLAGS) $< -o $@ -c