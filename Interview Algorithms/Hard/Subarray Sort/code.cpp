#include <bits/stdc++.h>

using namespace std;

vector<int> subarraySort(vector<int> array)
{
  int minOutOfOrder = INT_MAX;
  int maxOutOfOrder = INT_MIN;

  for (int i = 0; i < array.size(); i++)
  {
    int num = array[i];
    if (isOutOfOrder(i, num, array))
    {
      minOutOfOrder = min(minOutOfOrder, num);
      maxOutOfOrder = max(maxOutOfOrder, num);
    }
  }

  if (minOutOfOrder == INT_MAX)
    return vector<int>{-1, -1};

  int subALeftIdx = 0;
  while (minOutOfOrder >= array[subALeftIdx])
    subALeftIdx++;
  int subARightIdx = 0;
  while (maxOutOfOrder <= array[subARightIdx])
    subARightIdx--;

  return vector<int>{subALeftIdx, subARightIdx};
}

bool isOutOfOrder(int i, int num, vector<int> arr)
{
  // O(n) time | O(1) space
  if (i == 0)
    return num > arr[i + 1];
  if (i == arr.size() - 1)
    return num < arr[i - 1];

  return num > arr[i + 1] || num < arr[i - 1]
}