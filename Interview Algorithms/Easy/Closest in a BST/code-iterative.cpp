// Average: O(log(n)) time | O(Log(1)) space
// Worst: O(n) time | O(1) space
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
};
int findClosestValueInBstHelper(Node *root, int target, int closest)
{
  Node *currentNode = root;
  while (currentNode != NULL)
  {
    if (abs(target - closest) > abs(target - currentNode->data))
    {
      closest = currentNode->data;
    }
    if (target < currentNode->data)
      currentNode = currentNode->left;
    else if (target > currentNode->data)
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

int findCloststValueInBst(Node *root, int target)
{
  return findClosestValueInBstHelper(root, target, INT_MAX);
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

  cout << "Closest is : " << findCloststValueInBst(bst.root, 21);
}