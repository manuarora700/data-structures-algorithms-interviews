#include <bits/stdc++.h>
#include <any>

using namespace std;

int productSum(vector<any> array, int multiplier = 1)
{
  int sum = 0;

  for (auto el : array)
  {
    if (el.type() == typeid(vector<any>))
    {
      sum += productSum(any_cast<vector<any>>(el), multiplier + 1);
    }
    else
    {
      sum += any_cast<int>(el);
    }
  }
  return sum * multiplier;
}