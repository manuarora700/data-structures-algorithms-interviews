// Time: O(n^2) | Space: O(1)

#include <bits/stdc++.h>
using namespace std;

vector<int> selectionSort(vector<int> array)
{
  if (array.empty())
  {
    return {};
  }
  int startIdx = 0;
  while (startIdx < array.size() - 1)
  {
    int smallestIdx = 0;

    for (int i = startIdx + 1; i < array.size(); i++)
    {
      if (array[smallestIdx] > array[i])
      {
        smallestIdx = i;
      }
    }
    swap(array[startIdx], array[smallestIdx]);
    startIdx++;
  }
}