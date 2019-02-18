CXX = g++

CXXFLAGS = -Wall -g

BinaryHeapTest.o: BinaryHeap.cpp BinaryHeap.h
	$(CXX) $(CXXFLAGS) -c BinaryHeapTest.cpp

BinaryHeapTest: BinaryHeapTest.o BinaryHeap.o
	$(CXX) $(CXXFLAGS) -o BinaryHeapTest BinaryHeapTest.o BinaryHeap.o