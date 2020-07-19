#include <iostream>
#include <stack>

using namespace std;

int main()
{
  stack<int> s;
  s.push(100);
  s.push(200);
  s.push(300);
  s.push(400);
  s.push(500);

  cout << s.top() << endl;

  s.pop();

  cout << s.top() << endl;

  if (s.empty())
    cout << "Stack is empty";
  else
    cout << "Stack is not empty";

  cout << "Stack size: " << s.size() << endl;
}