#include <bits/stdc++.h>

using namespace std;

// Time: O(n) | Space: O(n)
int maxSubsetSumNoAdjacent(vector<int> array)
{
  if (!array.size())
    return INT_MIN;
  if (array.size() == 1)
    return array[0];

  vector<int> maxSums = array;
  maxSums[0] = array[0];
  maxSums[1] = max(array[0], array[1]);

  for (int i = 2; i < array.size(); i++)
  {
    maxSums[i] = max(maxSums[i - 1], maxSums[i - 2] + array[i]);
  }

  return maxSums[maxSums.size() - 1];
}

int main()
{
  vector<int> array{7, 10, 12, 7, 9, 14};
  cout << maxSubsetSumNoAdjacent(array);
}