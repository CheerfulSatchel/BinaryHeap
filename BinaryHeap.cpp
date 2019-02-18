#include <iostream>
#include "BinaryHeap.h"

BinaryHeap::BinaryHeap() {
  heap_size = 0;
  heap.push_back(0);
}

BinaryHeap::BinaryHeap(vector<int> vec) {
  heap_size = vec.size();

  heap = vec;
  // TODO: Construct the heap using the vector... 
}

BinaryHeap::~BinaryHeap() {
}

void BinaryHeap::insert(int x) {

}

int BinaryHeap::findMin() {
  if (heap_size == 0) {
    throw "Nothing to call findMin() on!!";
  }
  return heap[1];
}

int BinaryHeap::deleteMin() {
  if (heap_size == 0) {
    throw "Nothing to call deleteMin() on!!";
  }

  int deletedMin = heap[1];

  // Replace min value with last value in the heap
  heap[1] = heap[heap_size];
  
  // Remove last value from heap
  heap.pop_back();
  heap_size

  // Percolate value down from index of minimum value
  percolateDown(1);

  return deletedMin;
}

unsigned int BinaryHeap::size() {
  return heap_size;
}

void BinaryHeap::makeEmpty() {
  heap_size = 0;
  heap.resize(1);
}

bool BinaryHeap::isEmpty() {
  return heap_size == 0;
}

void BinaryHeap::print() {

}

// Hole is the start index to percolate upwards
void BinaryHeap::percolateUp(int hole) {

}

// Hole is the start index to percholate downwards
void BinaryHeap::percolateDown(int hole) {
  
}




