#include <bits/stdc++.h>

using namespace std;

typedef struct Queue
{
  int front, rear;
  int size, capacity;
  int *arr;
} Queue;

Queue *createQueue(int capacity)
{
  Queue *qu = (Queue *)malloc(sizeof(Queue));
  qu->capacity = capacity;
  qu->front = 0;
  qu->size = 0;
  qu->rear = capacity - 1;
  qu->arr = (int *)malloc(qu->capacity * sizeof(int));
  return qu;
}

// Function to check if queue is full or not
int isFull(Queue *queue)
{
  return queue->size == queue->capacity;
}

int isEmpty(Queue *queue)
{
  return queue->size == 0;
}

void enqueue(Queue *queue, int data)
{
  if (isFull(queue))
  {
    cout << "Queue is full\n";
    return;
  }

  queue->rear = (queue->rear + 1) % (queue->capacity);
  queue->arr[queue->rear] = data;
  queue->size = queue->size + 1;
}

int dequeue(Queue *queue)
{
  if (isEmpty(queue))
  {
    cout << "Queue underflow\n";
    return INT_MIN;
  }
  int data = queue->arr[queue->front];
  queue->front = (queue->front + 1) % queue->capacity;
  queue->size = queue->size - 1;

  return data;
}

int front(Queue *queue)
{
  if (isEmpty(queue))
  {
    return INT_MIN;
  }
  return queue->arr[queue->front];
}

int rear(Queue *queue)
{
  if (isEmpty(queue))
  {
    return INT_MIN;
  }
  return queue->arr[queue->rear];
}

// Display queue
void display(Queue *queue)
{
  for (int i = 0; i < queue->size; i++)
  {
    cout << queue->arr[(queue->front + i) % queue->capacity] << " ";
  }
  cout << "\n";
}

int main()
{
  int capacity, n;
  cin >> capacity >> n;
  Queue *queue = createQueue(capacity);

  for (int i = 0; i < n; i++)
  {
    int ele;
    cin >> ele;
    enqueue(queue, ele);
  }
  display(queue);
  cout << dequeue(queue) << "\n";
  cout << "\nFront : " << front(queue) << "\n";
  cout << dequeue(queue) << "\n";

  enqueue(queue, 100);

  display(queue);
  cout << "Rear : " << rear(queue) << "\n";
  return 0;
}