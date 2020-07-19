#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>

using namespace std;

void display(unordered_map<int, int> m)
{
  unordered_map<int, int>::iterator itr;
  for (itr = m.begin(); itr != m.end(); itr++)
  {
    cout << itr->first << " " << itr->second << endl;
  }
}

int main()
{
  unordered_map<int, int> m;

  m.insert(make_pair(2, 10));
  m[5] = 10;
  m[0] = 2;
  m.insert(make_pair(4, 13));

  display(m);
}