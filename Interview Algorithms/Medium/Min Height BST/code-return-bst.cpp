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
  // We don't use this method for this solution.
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
BST *constructMinHeightBst(vector<int> array, int startIdx, int endIdx);
// O(n) time | O(n) space - where n is the length of the array
BST *minHeightBst(vector<int> array)
{
  return constructMinHeightBst(array, 0, array.size() - 1);
}
BST *constructMinHeightBst(vector<int> array, int startIdx, int endIdx)
{
  if (endIdx < startIdx)
    return NULL;
  int midIdx = (startIdx + endIdx) / 2;
  BST *bst = new BST(array[midIdx]);
  bst->left = constructMinHeightBst(array, startIdx, midIdx - 1);
  bst->right = constructMinHeightBst(array, midIdx + 1, endIdx);
  return bst;
}