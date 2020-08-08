// Time: O(n^2) | Space: O(1) -- sorting time : O(nlogn)

#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> threeNumberSum(vector<int> array, int target)
{
  sort(array.begin(), array.end());

  vector<vector<int>> triplets;

  for (int i = 0; i < array.size() - 2; i++)
  {
    int left = i + 1;
    int right = array.size() - 1;

    while (left < right)
    {
      int currentSum = array[i] + array[left] + array[right];

      if (currentSum == target)
      {
        triplets.push_back({array[i], array[left], array[right]});
        left++;
        right--;
      }
      else if (currentSum < target)
      {
        left++;
      }
      else if (currentSum > target)
      {
        right--;
      }
    }
  }
  return triplets;
}