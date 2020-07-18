#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool myCompare(int x, int y)
{
  return (x < y);
}

int main()
{
  vector<int> v;

  int x;
  for (int i = 0; i < 5; i++)
  {
    cin >> x;
    v.push_back(x);
  }

  sort(v.begin(), v.end(), myCompare);

  vector<int>::iterator itr;
  // for (itr = v.begin(); itr != v.end(); itr++)
  // {
  //   cout << *itr << " ";
  // }
  // cout << endl;

  itr = v.begin() + 2;

  // Insert at a specific position
  v.insert(itr, 3, 5); // insert 5, 3 times;

  for (itr = v.begin(); itr != v.end(); itr++)
  {
    cout << *itr << " ";
  }
  cout << endl;

  // erasing from a position

  v.erase(v.begin() + 3, v.begin() + 5); // erase from 3 to 5
  for (itr = v.begin(); itr != v.end(); itr++)
  {
    cout << *itr << " ";
  }
  cout << endl;

  v.pop_back(); // deletes last element

  for (itr = v.begin(); itr != v.end(); itr++)
  {
    cout << *itr << " ";
  }
}