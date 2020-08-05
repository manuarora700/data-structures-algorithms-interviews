// Time: O(n) | space: O(h)

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
    else if (key >= node->data)
    {
      node->right = insertNode(node->right, key);
    }

    return node;
  }
  void addNode(int key)
  {
    root = insertNode(root, key);
  }
};

// recursive approach
int nodeDepths(Node *root, int depth = 0)
{
  // Base case

  if (!root)
    return 0;

  return depth + nodeDepths(root->left, depth + 1) + nodeDepths(root->right, depth + 1);
}

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

  cout << "Sum of depths: " << nodeDepths(bst.root);
}