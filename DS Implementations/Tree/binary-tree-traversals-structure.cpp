#include <bits/stdc++.h>

using namespace std;

typedef struct Node
{
  int data;
  Node *left;
  Node *right;
} Node;

Node *root = NULL;

Node *createNode(int data)
{
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

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

void preOrderTraversal(Node *node)
{
  if (node != NULL)
  {
    cout << node->data << " ";
    preOrderTraversal(node->left);
    preOrderTraversal(node->right);
  }
}

void inOrderTraversal(Node *node)
{
  if (node != NULL)
  {
    inOrderTraversal(node->left);
    cout << node->data << " ";
    inOrderTraversal(node->right);
  }
}

void postOrderTraversal(Node *node)
{
  if (node != NULL)
  {
    postOrderTraversal(node->left);
    postOrderTraversal(node->right);
    cout << node->data << " ";
  }
}

void levelordertraversal(Node *node)
{
  if (node == NULL)
  {
    return;
  }
  queue<Node *> qnode; // STL queue
  qnode.push(node);

  while (!qnode.empty())
  {
    Node *temp = qnode.front();
    qnode.pop();
    cout << temp->data << " ";
    if (temp->left != NULL)
    {
      qnode.push(temp->left);
    }
    if (temp->right != NULL)
    {
      qnode.push(temp->right);
    }
  }
}

int maxHeight(Node *node)
{
  if (node == NULL)
    return 0;

  int l = maxHeight(node->left);
  int r = maxHeight(node->right);

  return max(l, r) + 1;
}

int size(Node *node)
{
  if (node == NULL)
    return 0;

  return (size(node->left) + size(node->right) + 1);
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

  // root = createNode(5);
  // root->left = createNode(6);
  // root->right = createNode(7);
  // root->left->left = createNode(4);
  // root->left->right = createNode(3);
  // root->right->left = createNode(2);

  cout << "Preorder Traversal = "
       << "\n";
  preOrderTraversal(root);
  cout << endl;

  cout << "inOrder Traversal = "
       << "\n";
  inOrderTraversal(root);
  cout << endl;

  cout << "postOrder Traversal = "
       << "\n";
  postOrderTraversal(root);
  cout << endl;

  cout << "Level order Traversal = "
       << "\n";
  levelordertraversal(root);

  cout << endl;

  cout << "Height = " << maxHeight(root) << endl;
  cout << "size = " << size(root) << endl;

  cout << "Search 25: \n";
  search(25);
  cout << endl;

  return 0;
}