#include <bits/stdc++.h>
#include <iostream>
#include <map>

using namespace std;

void display(map<int, int> m)
{
  map<int, int>::iterator itr;
  for (itr = m.begin(); itr != m.end(); itr++)
  {
    cout << itr->first << " " << itr->second << endl;
  }
}

int main()
{
  map<int, int> m;

  m.insert(make_pair(2, 10));
  m[5] = 10;
  m[0] = 2;
  m.insert(make_pair(4, 13));

  display(m);
}