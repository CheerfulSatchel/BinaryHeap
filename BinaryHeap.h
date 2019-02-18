/***

 Based on Professor Aaron Bloomfield's interface.

 See https://aaronbloomfield.github.io/pdr/slides/code/10-heaps-huffman/binary_heap.h.html

 C++ implementation is different.

***/

#ifndef BINARY_HEAP_H
#define BINARY_HEAP_H

#include <vector>
using namespace std;

class BinaryHeap {
 public:
 // Default constructor
  BinaryHeap();
  BinaryHeap(vector<int> vec);

  ~BinaryHeap();

  void insert(int x);
  int findMin();
  int deleteMin();
  unsigned int size();
  void makeEmpty();
  bool isEmpty();
  void print();

 private:
  vector<int> heap;
  unsigned int heap_size;

  void percolateUp(int hole);
  void percolateDown(int hole);
};

#endif
