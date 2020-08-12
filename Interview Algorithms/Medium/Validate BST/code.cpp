#include <bits/stdc++.h>
using namespace std;
class BST
{
public:
  int value;
  BST *left;
  BST *right;
  BST(int val);
  BST &insert(int val);
};
bool validateBst(BST *tree);
bool validateBstHelper(BST *tree, int minValue, int maxValue);
// O(n) time | O(d) spaceS

bool validateBst(BST *tree)
{
  return validateBstHelper(tree, INT_MIN, INT_MAX);
}

bool validateBst(BST *root, int minValue, int maxValue)
{
  if (root == NULL)
    return true;

  if (root->value < minValue || root->value >= maxValue)
    return false;

  bool isLeftValid = validateBstHelper(root->left, minValue, root->value);
  bool isRightValid = validateBstHelper(root->right, root->value, maxValue);

  return isLeftValid && isRightValid;
}