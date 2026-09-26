
BINDIR = bin
BLDDIR = build
INCDIR = include
LIBDIR = LIBDIR
SRCDIR = src

CXX = g++
CXX_FLAGS = -Wall -O1 -g -I./$(INCDIR)
LD_FLAGS = -Wall -O1 -g


all: $(BINDIR)/test
$(BINDIR)/test: $(BLDDIR)/test.o $(BLDDIR)/Point.o
		$(CXX) $(LD_FLAGS) $? -o $@

$(BLDDIR)/test.o: $(SRCDIR)/test.cpp $(INCDIR)/Point.h
	$(CXX) $(CXX_FLAGS) $< -o $@ -c
#	$(CXX) $(CXX_FLAGS) $(SRCDIR)/test.cpp -o $(BLDDIR)/test.o

$(BLDDIR)/test.o: $(SRC)/test.cpp
		$(CXX) $(CXX_FLAGS) $^ -o $@
		$(CXX) $(CXX_FLAGS) &(SRC)/test.cpp -o $(BLDDIR)/test.o

$(BLDDIR)/Point.o: $(SRC)/Point.cpp
		$(CXX) $(CXX_FLAGS) $^ -o $@

