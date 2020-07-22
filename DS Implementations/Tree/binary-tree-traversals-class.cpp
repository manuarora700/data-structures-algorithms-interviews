#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
  int data;
  Node *left;
  Node *right;

  Node(int data)
  {
    this->data = data;
    left = NULL;
    right = NULL;
  }
};

class BinaryTree
{
public:
  void preOrderTraversal(Node *node)
  {
    if (node != NULL)
    {
      cout << node->data;
      preOrderTraversal(node->left);
      preOrderTraversal(node->right);
    }
  }
};

int main()
{
  BinaryTree bt;
  Node *root = NULL;

  root = new Node(5);
  root->left = new Node(6);
  root->right = new Node(7);

  root->left->right = new Node(2);
  root->left->left = new Node(3);
  root->right->left = new Node(9);

  cout << "Preeorder traversal is = \n";
  bt.preOrderTraversal(root);
}