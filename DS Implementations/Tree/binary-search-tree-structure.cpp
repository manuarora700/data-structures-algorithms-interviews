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

Node *searchKey(Node *node, int key)
{
  if (node == NULL || node->data == key)
  {
    return node;
  }
  if (key < node->data)
  {
    return searchKey(node->left, key);
  }
  else
  {
    return searchKey(node->right, key);
  }
}

void search(int key)
{
  Node *node = searchKey(root, key);
  if (node != NULL)
  {
    cout << "Key found : " << key << endl;
  }
  else
  {
    cout << "Not found \n";
  }
}
int minimumValue(Node *node)
{
  int minValue = node->data;
  while (node->left != NULL)
  {
    minValue = node->left->data;
    node = node->left;
  }

  return minValue;
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
    // Key found
    // Check single child or not
    if (node->left == NULL)
    {
      return node->right;
    }
    else if (node->right == NULL)
    {
      return node->left;
    }

    // Both child
    node->data = minimumValue(node->right);
    node->right = deleteNodeRec(node->right, node->data);
  }

  return node;
}
void deleteNode(int key)
{
  root = deleteNodeRec(root, key);
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
  cout << endl;

  cout << "Search 60: \n";
  search(60);
  cout << endl;

  deleteNode(60);

  cout << "Search 62: \n";
  search(60);
  cout << endl;

  inorder(root);
  cout << endl;
  return 0;
}