#include <bits/stdc++.h>
using namespace std;

typedef struct stack
{
  int capacity;
  int top;
  int *arr;
} Stack;

// Initialize stack
Stack *initializeStack(int capacity)
{
  Stack *st = (Stack *)malloc(sizeof(Stack));
  st->capacity = capacity;
  st->top = -1;
  st->arr = (int *)malloc(sizeof(int) * capacity);
  return st;
}
// Return size of stack
int size(Stack *st)
{
  return st->top + 1;
}

// Function to Check if stack is empty or not
int isEmpty(Stack *st)
{
  return st->top == -1;
}

// Function to check if the stack is full
int isFull(Stack *st)
{
  return st->top + 1 == st->capacity;
}

// Push into the stack
void push(Stack *st, int data)
{
  if (isFull(st))
  {
    cout << "Overflow";
    return;
  }

  ++st->top; // Increment top first st->top = st->top+1

  st->arr[st->top] = data;
}

// Peek function to print top element without popping

int peek(Stack *st)
{
  if (isEmpty(st))
  {
    cout << "Stack is empty";
    return -1;
  }
  return st->arr[st->top];
}

// Pop function

int pop(Stack *st)
{
  if (isEmpty(st))
  {
    cout << "Underflow";
    return -1;
  }
  int element = st->arr[st->top];
  st->top = st->top - 1;

  return element;
}

int main()
{
  int capacity; // capacity of stack
  int n;        // elements we want to push

  cin >> capacity >> n;
  Stack *st = initializeStack(capacity);

  for (int i = 0; i < n; i++)
  {
    int ele;
    cin >> ele;
    push(st, ele);
  }

  cout << "Top of stack = " << peek(st) << "\n";
  cout << "Size of stack = " << size(st) << "\n";

  if (isEmpty(st))
    cout << "Stack is empty\n";
  else
    cout << "Stack isnot empty\n";

  cout << "Popping all elements : \n";

  for (int i = 0; i < n; i++)
  {
    cout << pop(st) << "\n";
  }

  cout << "Size of stack after pop = " << size(st) << "\n";

  if (isEmpty(st))
    cout << "Stack is empty after pop\n";
  else
    cout << "Stack isnot empty after pop\n";
}