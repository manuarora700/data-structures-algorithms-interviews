#include <bits/stdc++.h>

using namespace std;

class Stack
{
  char *arr;
  int top;
  int capacity;

public:
  Stack()
  {
    this->capacity = 1000000;
    arr = new char[capacity];
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
  void push(char data)
  {
    if (isFull())
    {
      cout << "Overflow\n";
      return;
    }
    top++;
    arr[top] = data;
  }

  char peek()
  {
    if (isEmpty())
    {
      cout << "Stack empty";
      return -1;
    }
    return arr[top];
  }

  char pop()
  {
    if (isEmpty())
    {
      cout << "Underflow\n";
      return -1;
    }
    return arr[top--];
  }
};

//Precedence function to return precedence of operators

int prec(char c)
{
  if (c == '^')
    return 3;
  else if (c == '/' || c == '*')
    return 2;
  else if (c == '-' || c == '+')
    return 1;
  else
    return -1;
}

void infixToPostfix(string s)
{
  Stack st;
  st.push('#'); // #indicates the end of stack just for simplicity;
  int l = s.length();
  string ns;

  for (int i = 0; i < l; i++)
  {
    //  If scanned char is an operand--> append it to the final string
    if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
    {
      ns += s[i];
    }

    // If scanned char is an opening bracket '(', push it into stack
    else if (s[i] == '(')
      st.push(s[i]);
    // if the scanned character is an ')' --> pop elements present in the stack and append in ns untl we reach the opening brackets

    else if (s[i] == ')')
    {
      while (st.peek() != '#' && st.peek() != '(')
      {
        char c = st.pop();
        ns += c;
      }

      if (st.peek() == '(')
      {
        st.pop();
      }
    }

    // If the scanned character is an operator
    else
    {
      while (st.peek() != '#' && prec(s[i]) <= prec(st.peek()))
      {
        char c = st.pop();
        ns += c;
      }
      st.push(s[i]);
    }
  }
  // FInally pop all elements and append them
  while (st.peek() != '#')
  {
    char c = st.pop();

    ns += c;
  }

  cout << ns;
}

int main()
{
  int t;
  cin >> t;
  string s;
  while (t--)
  {
    cin >> s;
    infixToPostfix(s);
  }
}