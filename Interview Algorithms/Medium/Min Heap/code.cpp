#include <bits/stdc++.h>
#include <vector>
using namespace std;
class MinHeap
{
public:
  vector<int> heap;
  MinHeap(vector<int> vector) { heap = buildHeap(&vector); }
  // O(n) time | O(1) space
  vector<int> buildHeap(vector<int> *vector)
  {
    int firstParentIdx = (vector->size() - 2) / 2;
    for (int currentIdx = firstParentIdx; currentIdx >= 0; currentIdx--)
    {
      siftDown(currentIdx, vector->size() - 1, vector);
    }
    return *vector;
  }
  // O(log(n)) time | O(1) space
  void siftDown(int currentIdx, int endIdx, vector<int> *heap)
  {
    int childOneIdx = currentIdx * 2 + 1;
    while (childOneIdx <= endIdx)
    {
      int childTwoIdx = currentIdx * 2 + 2 <= endIdx ? currentIdx * 2 + 2 : -1;
      int idxToSwap;
      if (childTwoIdx != -1 && heap->at(childTwoIdx) < heap->at(childOneIdx))
      {
        idxToSwap = childTwoIdx;
      }
      else
      {
        idxToSwap = childOneIdx;
      }
      if (heap->at(idxToSwap) < heap->at(currentIdx))
      {
        swap(currentIdx, idxToSwap, heap);
        currentIdx = idxToSwap;
        childOneIdx = currentIdx * 2 + 1;
      }
      else
      {
        return;
      }
    }
  }
  // O(log(n)) time | O(1) space
  void siftUp(int currentIdx, vector<int> *heap)
  {
    int parentIdx = (currentIdx - 1) / 2;
    while (currentIdx > 0 && heap->at(currentIdx) < heap->at(parentIdx))
    {
      swap(currentIdx, parentIdx, heap);
      currentIdx = parentIdx;
      parentIdx = (currentIdx - 1) / 2;
    }
  }
  int peek() { return heap[0]; }
  int remove()
  {
    swap(0, heap.size() - 1, &heap);
    int valueToRemove = heap.back();
    heap.pop_back();
    siftDown(0, heap.size() - 1, &heap);
    return valueToRemove;
  }
  void insert(int value)
  {
    heap.push_back(value);
    siftUp(heap.size() - 1, &heap);
  }
  void swap(int i, int j, vector<int> *heap)
  {
    int temp = heap->at(j);
    heap->at(j) = heap->at(i);
    heap->at(i) = temp;
  }
};