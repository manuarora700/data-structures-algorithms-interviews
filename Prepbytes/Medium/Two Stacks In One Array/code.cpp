#include <bits/stdc++.h>

using namespace std;

class StackArray
{
public:
  int *arr;
  int size;
  int top1, top2;
  StackArray(int n)
  {
    size = n;
    arr = new int[n];
    top1 = -1;
    top2 = size;
  }
  void push1(int data)
  {
    if (top1 < top2 - 1)
    {
      arr[++top1] = data;
    }
    else
    {
      cout << "Stack1 overflow";
    }
  }

  void push2(int data)
  {
    if (top1 < top2 - 1)
    {
      arr[--top2] = data;
    }
    else
    {
      cout << "Stack1 overflow";
    }
  }
  int pop1()
  {
    if (top1 > -1)
    {
      int poppedElement = arr[top1--];
      cout << "Stack1 popped element= " << poppedElement << "\n";
    }
    else
    {
      cout << "Stack1 underflow\n";
    }
  }

  int pop2()
  {
    if (top2 < size)
    {
      int poppedElement = arr[top2++];
      cout << "Stack2 popped element= " << poppedElement << "\n";
    }
    else
    {
      cout << "Stack2 underflow\n";
    }
  }

  void print1()
  {
    for (int i = top1; i >= 0; i--)
    {
      cout << arr[i] << " ";
      cout << "\n";
    }

    void print1()
    {
      for (int i = top2; i < size; i++)
      {
        cout << arr[i] << " ";
      }
      cout << "\n";
    }
  };

  int main()
  {
    int n;
    cin >> n;
    StackArray sa(n);

    int stack1, stack2;
    cin >> stack1 >> stack2;

    return 0;
  }