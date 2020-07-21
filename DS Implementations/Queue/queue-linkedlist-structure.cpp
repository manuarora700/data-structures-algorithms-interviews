#include <bits/stdc++.h>

using namespace std;

typedef struct Node
{
  int data;
  Node *next;
} Node;

typedef struct Queue
{
  Node *front;
  Node *rear;
} Queue;

// Create node
Node *createNode(int data)
{
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}
// Create queue

Queue *createQueue()
{
  Queue *qu = (Queue *)malloc(sizeof(Queue));
  qu->front = nullptr;
  qu->rear = nullptr;

  return qu;
}

void enqueue(Queue *queue, int data)
{
  Node *newNode = createNode(data);
  if (queue->rear == nullptr)
  {
    queue->rear = newNode;
    queue->front = newNode;
    return;
  }

  queue->rear->next = newNode;
  queue->rear = newNode;
}

int dequeue(Queue *queue)
{
  if (queue->front == nullptr)
  {
    return INT_MAX;
  }

  Node *temp = queue->front;
  queue->front = queue->front->next;

  if (queue->front == nullptr)
  {
    queue->front = nullptr;
    queue->rear = nullptr;
  }

  int data = temp->data;
  free(temp);

  return data;
}

int main()
{
  Queue *queue = createQueue();

  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int ele;
    cin >> ele;

    enqueue(queue, ele);
  }

  cout << dequeue(queue) << "\n";
  cout << dequeue(queue) << "\n";
  cout << dequeue(queue) << "\n";

  enqueue(queue, 100);

  cout << "Queue front: " << queue->front->data << "\n";
  cout << "Queue rear: " << queue->rear->data << "\n";
  return 0;
}