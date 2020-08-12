#include <bits/stdc++.h>

using namespace std;

// Time: O(n) | Space: O(1)
int maxSubsetSumNoAdjacent(vector<int> array)
{
  if (!array.size())
    return INT_MIN;
  if (array.size() == 1)
    return array[0];

  int second = array[0];
  int first = max(array[0], array[1]);

  for (int i = 2; i < array.size(); i++)
  {
    int current = max(first, second + array[i]);
    second = first;
    first = current;
  }

  return first;
}

int main()
{
  vector<int> array{7, 10, 12, 7, 9, 14};
  cout << maxSubsetSumNoAdjacent(array);
}