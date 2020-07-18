#include <iostream>
#include <set>
using namespace std;

void display(set<int> s)
{
  set<int>::iterator itr;

  for (itr = s.begin(); itr != s.end(); itr++)
  {
    cout << *itr << " ";
  }
  cout << endl;
}
int main()
{

  set<int> s;

  s.insert(40);
  s.insert(20);
  s.insert(10);
  s.insert(50);
  s.insert(50);
  s.insert(1);
  s.insert(72);
  s.insert(24);
  s.insert(12);
  s.erase(10);

  if (s.find(50) != s.end())
  {
    cout << "50 is there";
    cout << endl;
  }
  set<int>::iterator itr = s.find(50);
  cout << *itr << endl;
  display(s);
}