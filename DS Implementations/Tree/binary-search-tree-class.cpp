#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
  int data;
  Node *left, *right;

  Node(int key)
  {
    data = key;
    left = right = NULL;
  }
};
class BST
{
public:
  Node *root;
  BST()
  {
    root = NULL;
  }
  void preOrderTraversal(Node *node)
  {
    if (node != NULL)
    {
      cout << node->data << " ";
      preOrderTraversal(node->left);
      preOrderTraversal(node->right);
    }
  }
  void inorder(Node *node)
  {
    if (node != NULL)
    {
      inorder(node->left);
      cout << node->data << " ";

      inorder(node->right);
    }
  }
  Node *insertNode(Node *node, int key)
  {
    if (node == NULL)
    {
      node = new Node(key);
      return node;
    }
    if (key < node->data)
    {
      node->left = insertNode(node->left, key);
    }
    else if (key > node->data)
    {
      node->right = insertNode(node->right, key);
    }

    return node;
  }
  void addNode(int key)
  {
    root = insertNode(root, key);
  }

  int maximumVal(Node *node)
  {
    int maxValue = node->data;
    while (node->right != NULL)
    {
      maxValue = node->right->data;
      node = node->right;
    }
    return maxValue;
  }

  Node *deleteNodeRec(Node *node, int key)
  {
    if (node == NULL)
    {
      return node;
    }
    if (key < node->data)
    {
      node->left = deleteNodeRec(node->left, key);
    }
    else if (key > node->data)
    {
      node->right = deleteNodeRec(node->right, key);
    }
    else
    {
      if (node->left == NULL)
        return node->right;
      else if (node->right == NULL)
        return node->left;

      node->data = maximumVal(node->left);
      node->left = deleteNodeRec(node->left, node->data);
      return node;
    }
  }
};

int main()
{
  BST bst;
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int ele;
    cin >> ele;
    bst.addNode(ele);
  }

  cout << "preorder = \n";
  bst.preOrderTraversal(bst.root);
  cout << endl;

  cout << "inorder = \n";
  bst.inorder(bst.root);
  cout << endl;
}