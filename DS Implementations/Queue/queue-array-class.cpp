#include <bits/stdc++.h>

using namespace std;

class Queue
{
  int front, rear;
  int size, capacity;
  int *arr;

public:
  Queue(int capacity)
  {
    this->capacity = capacity;
    front = 0;
    rear = capacity - 1;
    size = 0;

    arr = new int[capacity];
  }

  // To check queue is full or not
  int isFull()
  {
    return size == capacity;
  }
  int isEmpty()
  {
    return size == 0;
  }

  void enqueue(int data)
  {
    if (isFull())
    {
      cout << "Queue is full\n";
      return;
    }

    rear = (rear + 1) % capacity;
    arr[rear] = data;
    size++;
  }

  int frontEle()
  {
    if (isEmpty())
      return INT_MIN;

    return arr[front];
  }

  int rearEle()
  {
    if (isEmpty())
      return INT_MIN;

    return arr[rear];
  }

  void display()
  {
    for (int i = 0; i < size; i++)
    {
      cout << arr[(front + i) % capacity] << " ";
    }

    cout << "\n";
  }
};

int main()
{
  int capacity, n;
  cin >> capacity >> n;

  Queue queue(capacity);

  for (int i = 0; i < n; i++)
  {
    int ele;
    cin >> ele;
    queue.enqueue(ele);
  }

  cout << queue.frontEle();
  cout << "\n";
  cout << queue.rearEle();
  cout << "\n";

  queue.display();
}