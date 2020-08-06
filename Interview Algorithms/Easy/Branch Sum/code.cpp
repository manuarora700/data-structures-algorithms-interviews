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

void calcBranchSum(Node *root, int runningSum, vector<int> &sums)
{
  if (!root)
    return;

  int newRunningSum = runningSum + root->data;
  if (!root->left && !root->right)
  {
    // leaf node hit
    // cout << "leaf node hit \n"
    //      << "Running sum : " << newRunningSum << "\n";
    sums.push_back(newRunningSum);
    // cout << "Current vector<int> sums size " << sums.size() << " \n";
  }
  calcBranchSum(root->left, newRunningSum, sums);
  calcBranchSum(root->right, newRunningSum, sums);
}
void branchSum(Node *root)
{
  vector<int> sums;
  calcBranchSum(root, 0, sums);

  cout << "Sums Array : ";
  for (int i = 0; i < sums.size(); i++)
  {
    cout << sums[i] << " ";
  }
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

  branchSum(bst.root);

  // cout << "Closest is : " << findCloststValueInBst(bst.root, 21);
}