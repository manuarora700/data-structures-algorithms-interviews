#include <bits/stdc++.h>

using namespace std;

class Stack
{
  int *arr;
  int top;
  int capacity;

public:
  Stack(int capacity)
  {
    this->capacity = capacity;
    arr = new int(capacity);
    top = -1;
  }

  int size()
  {
    return top + 1;
  }

  bool isEmpty()
  {
    return top == -1;
  }
  bool isFull()
  {
    return top + 1 == capacity;
  }
  void push(int data)
  {
    if (isFull())
    {
      cout << "Overflow\n";
      return;
    }
    top++;
    arr[top] = data;
  }

  int peek()
  {
    if (isEmpty())
    {
      cout << "Stack empty";
      return;
    }
    return arr[top];
  }

  int pop()
  {
    if (isEmpty())
    {
      cout << "Underflow\n";
      return -1;
    }
    return arr[top--];
  }
};

int main()
{
  int capacity, n;
  cin >> capacity >> n;

  Stack st(capacity);
  for (int i = 0; i < n; i++)
  {
    int ele;
    cin >> ele;
    st.push(ele);
  }

  cout << st.peek();
}