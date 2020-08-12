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
  deque<BT *> queue;
  queue.push_back(tree);
  while (queue.size() > 0)
  {
    BT *current = queue.front();
    queue.pop_front();
    if (current == NULL)
      continue;

    swapLeftRight(current);
    queue.push_back(current->left);
    queue.push_back(current->right);
  }
}

void swapLeftRight(BT *tree)
{
  BT *left = tree->left;
  tree->left = tree->right;
  tree->right = left;
}