// Average: O(log(n)) time | O(Log(n)) space
// Worst: O(n) time | O(n) space
#include <bits/stdc++.h>

using namespace std;

class BST
{
public:
  int value;
  BST *left;
  BST *right;
};

int findClosestValueInBstHelper(BST *root, int target, int closest)
{
  BST *currentNode = root;
  while (currentNode != NULL)
  {
    if (abs(target - closest) > abs(target - currentNode->value))
    {
      closest = currentNode->value;
    }
    if (target < currentNode->value)
      currentNode = currentNode->left;
    else if (target > currentNode->value)
    {
      currentNode = currentNode->right;
    }
    else
    {
      break;
    }
  }
  return closest;
}

int findCloststValueInBst(BST *root, int target)
{
  return findClosestValueInBstHelper(root, target, INT_MAX);
}

int main()
{
}