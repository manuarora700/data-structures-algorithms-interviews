#include <bits/stdc++.h>
using namespace std;
class BST
{
public:
  int value;
  BST *left;
  BST *right;
  BST(int value)
  {
    this->value = value;
    left = NULL;
    right = NULL;
  }
  void insert(int value)
  {
    if (value < this->value)
    {
      if (left == NULL)
      {
        left = new BST(value);
      }
      else
      {
        left->insert(value);
      }
    }
    else
    {
      if (right == NULL)
      {
        right = new BST(value);
      }
      else
      {
        right->insert(value);
      }
    }
  }
};
BST *constructMinHeightBst(vector<int> array, BST *bst, int startIdx,
                           int endIdx);
// O(nlog(n)) time | O(n) space - where n is the length of the array
BST *minHeightBst(vector<int> array)
{
  return constructMinHeightBst(array, NULL, 0, array.size() - 1);
}
BST *constructMinHeightBst(vector<int> array, BST *bst, int startIdx,
                           int endIdx)
{
  if (endIdx < startIdx)
    return NULL;
  int midIdx = (startIdx + endIdx) / 2;
  int valueToAdd = array[midIdx];
  if (bst == NULL)
  {
    bst = new BST(valueToAdd);
  }
  else
  {
    bst->insert(valueToAdd);
  }
  constructMinHeightBst(array, bst, startIdx, midIdx - 1);
  constructMinHeightBst(array, bst, midIdx + 1, endIdx);
  return bst;
}