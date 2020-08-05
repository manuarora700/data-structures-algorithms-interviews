// Time: O(n) | space: O(n)

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
//iterative

// A structure to store in the stack -- contains node and depth

struct Level
{
  Node *root;
  int depth;
};
int nodeDepths(Node *root)
{
  int sumOfDepths = 0;
  vector<Level> stack = {{root, 0}}; // a 2d array which acts as a stack

  while (stack.size() > 0)
  {
    Node *node = stack.back().root;
    int depth = stack.back().depth;
    stack.pop_back();

    if (node == NULL)
      continue;

    sumOfDepths = sumOfDepths + depth;
    stack.push_back(Level{node->left, depth + 1});
    stack.push_back(Level{node->right, depth + 1});
  }

  return sumOfDepths;
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

  cout << "inorder = \n";
  bst.inorder(bst.root);
  cout << endl;

  cout << "Sum of depths: " << nodeDepths(bst.root);
}