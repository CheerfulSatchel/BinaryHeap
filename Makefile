CXX = g++

CXXFLAGS = -Wall -g

binary_heap_test.o: binary_heap_test.cpp binary_heap.h
	$(CXX) $(CXXFLAGS) -c binary_heap_test.cpp

binary_heap_test: binary_heap_test.o binary_heap.o
	$(CXX) $(CXXFLAGS) -o builds/BinaryHeapTest binary_heap_test.o binary_heap.o

clean:
	rm *.o
