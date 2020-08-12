#include <bits/stdc++.h>

using namespace std;

class BT
{
public:
  int value;
  BT *left;
  BT *right;

  BT(int value);
  void insert(vector<int> values, int i = 0);
  void invertedInsert(vector<int> values, int i = 0);
};

void swapLeftRight(BT *tree);

void invertBinaryTree(BT *tree)
{
  if (tree == NULL)
    return;

  swapLeftRight(tree);
  invertBinaryTree(tree->left);
  invertBinaryTree(tree->right);
}

void swapLeftRight(BT *tree)
{
  BT *left = tree->left;
  tree->left = tree->right;
  tree->right = left;
}