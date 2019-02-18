#include <iostream>
#include "binary_heap.h"

BinaryHeap::BinaryHeap() {
  heap_size_ = 0;
  heap_.push_back(0);
}

BinaryHeap::BinaryHeap(vector<int> vec) {
  heap_size_ = vec.size();

  heap_ = vec;
  // TODO: Construct the heap using the vector... 
}

BinaryHeap::~BinaryHeap() {
}

void BinaryHeap::Insert(int x) {

}

int BinaryHeap::FindMin() {
  if (heap_size_ == 0) {
    throw "Nothing to call findMin() on!!";
  }
  return heap_[1];
}

int BinaryHeap::DeleteMin() {
  if (heap_size_ == 0) {
    throw "Nothing to call deleteMin() on!!";
  }

  int deletedMin = heap_[1];

  // Replace min value with last value in the heap
  heap_[1] = heap_[heap_size_];
  
  // Remove last value from heap
  heap_.pop_back();
  heap_size_ -= 1;

  // Percolate value down from index of minimum value
  PercolateDown(1);

  return deletedMin;
}

unsigned int BinaryHeap::heap_size() {
  return heap_size_;
}

void BinaryHeap::MakeEmpty() {
  heap_size_ = 0;
  heap_.resize(1);
}

bool BinaryHeap::IsEmpty() {
  return heap_size_ == 0;
}

void BinaryHeap::Print() {

}

// Hole is the start index to percolate upwards
void BinaryHeap::PercolateUp(int hole) {

}

// Hole is the start index to percholate downwards
void BinaryHeap::PercolateDown(int hole) {
  
}




