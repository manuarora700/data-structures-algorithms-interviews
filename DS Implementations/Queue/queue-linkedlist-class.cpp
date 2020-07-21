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
    this->next = nullptr;
  }
};

class Queue
{
public:
  Node *front;
  Node *rear;

  Queue()
  {
    front = rear = nullptr;
  }

  void enqueue(int data)
  {
    Node *temp = new Node(data);
    if (rear == NULL)
    {
      front = rear = temp;
      return;
    }

    rear->next = temp;
    rear = temp;
  }

  int dequeue()
  {
    if (front == NULL)
    {
      return INT_MAX;
    }
    Node *temp = front;
    front = front->next;

    if (front == NULL)
    {
      front = rear = NULL;
    }

    int data = temp->data;

    free(temp);

    return data;
  }
};

int main()
{
  Queue queue;
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int ele;
    cin >> ele;
    queue.enqueue(ele);
  }
  return 0;
}