#include <iostream>
#include <cassert>

#include "binary_heap.h"

int main() {
  cout << "Welcome to the heap tester wester!" << endl;
  BinaryHeap* heap = new BinaryHeap();
  vector<int> expected_vec;
  
  heap->Insert(2);
  heap->Insert(4);
  heap->Insert(6);
  heap->Insert(7);
  heap->Insert(5);

  heap->Print();

  expected_vec.push_back(0);
  expected_vec.push_back(2);
  expected_vec.push_back(4);
  expected_vec.push_back(6);
  expected_vec.push_back(7);
  expected_vec.push_back(5);

  assert(heap->heap() == expected_vec);

  heap->Insert(3);

  heap->Print();

  expected_vec.resize(1);
  expected_vec.push_back(2);
  expected_vec.push_back(4);
  expected_vec.push_back(3);
  expected_vec.push_back(7);
  expected_vec.push_back(5);
  expected_vec.push_back(6);

  assert(heap->heap() == expected_vec);

  heap->DeleteMin();
  
  heap->Print();

  heap->DeleteMin();
  
  heap->Print();

  heap->MakeEmpty();
  expected_vec.resize(1);

  assert(heap->heap() == expected_vec);
  
  delete heap;
  
  return 0;
}
