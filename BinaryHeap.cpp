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
  return -1;
}

int BinaryHeap::deleteMin() {
  return -1;
}

unsigned int BinaryHeap::size() {
  return 0;
}

void BinaryHeap::makeEmpty() {

}

bool BinaryHeap::isEmpty() {
  return false;
}

void BinaryHeap::print() {

}



