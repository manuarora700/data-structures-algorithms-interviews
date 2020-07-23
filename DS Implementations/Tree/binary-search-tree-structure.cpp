#include <bits/stdc++.h>

using namespace std;

typedef struct Node
{
  int data;
  Node *left, *right;
} Node;

Node *createNode(int key)
{
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = key;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}

Node *root = NULL;

Node *insertNode(Node *node, int key)
{
  if (node == NULL)
  {
    node = createNode(key);
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

void preorder(Node *node)
{
  if (node != NULL)
  {
    cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);
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

int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int ele;
    cin >> ele;

    addNode(ele);
  }

  cout << "Preorder: \n";
  preorder(root);
  cout << endl;
  cout << "Inorder: \n";
  inorder(root);

  return 0;
}