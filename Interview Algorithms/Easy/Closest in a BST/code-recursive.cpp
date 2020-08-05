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
  if (root == nullptr)
  {
    return closest;
  }
  if (abs(target - closest) > abs(target - root->value))
  {
    closest = root->value;
  }
  if (target < root->value)
    return findClosestValueInBstHelper(root->left, target, closest);
  else if (target > root->value)
  {
    return findClosestValueInBstHelper(root->right, target, closest);
  }
  else
  {
    return closest;
  }
}

int findCloststValueInBst(BST *root, int target)
{
  return findClosestValueInBstHelper(root, target, INT_MAX);
}

int main()
{
}