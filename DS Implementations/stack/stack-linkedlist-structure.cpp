#include <bits/stdc++.h>

using namespace std;

typedef struct Node
{
  int data;
  struct Node *next;

} Node;

Node *head = NULL;
int size = 0;

void push(int data)
{
  Node *newNode = (Node *)malloc(sizeof(Node));
  if (!newNode)
  {
    cout << "Heap size overflow!\n";
    return;
  }
  newNode->data = data;
  newNode->next = head;
  head = newNode;
  size++;
}

// Check if stack is isEmpty
int isEmpty()
{
  return head == NULL;
}

int peek()
{
  if (isEmpty())
    return -1;
  return head->data;
}

int pop()
{
  Node *temp;

  if (head == NULL)
    return -1;

  int ele = head->data;
  temp = head;
  head = head->next;
  free(temp);
  size--;
  return ele;
}

int sizeFunction() { return size; }

int main()
{
  // Driver code here
}