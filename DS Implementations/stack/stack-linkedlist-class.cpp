#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node(int data)
  {
    this->data = data;
    next = NULL;
  }
};

class Stack
{
  Node *head;

public:
  Stack()
  {
    head = NULL;
  }

  void push(int data)
  {
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
  }

  int isEmpty() { return head == NULL }

  int peak()
  {
    if (isEmpty())
    {
      cout << "Empty bruh!";
      return -1;
    }

    return head->data;
  }

  int pop()
  {
    Node *temp;

    if (head == NULL)
    {
      cout << "Stack underflow";
      return -1;
    }

    int ele = head->data;
    temp = head;
    head = head->next;
    free(temp);
    return ele;
  }
};

int main()
{
  // driver code goes here
}