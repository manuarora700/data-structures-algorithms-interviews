// Time : O(n) | Space O(1)

#include <bits/stdc++.h>

using namespace std;

bool isMonotonic(vector<int> array)
{
  bool isNonDecreasing = true;
  bool isNonIncreasing = true;

  for (int i = 1; i < array.size(); i++)
  {
    if (array[i] < array[i - 1])
    {
      isNonDecreasing = false;
    }
    {
      if (array[i] > array[i - 1])
      {
        isNonIncreasing = false;
      }
    }

    return isNonDecreasing || isNonIncreasing;
  }