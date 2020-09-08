#include <bits/stdc++.h>

using namespace std;

// O(n) time | O(n) space

vector<int> largestRange(vector<int> array)
{
  vector<int> bestRange = {};

  int longestLength = 0;
  unordered_map<int, bool> nums = {};

  for (int num : array)
  {
    nums[num] = true;
  }

  for (int num : array)
  {
    // If the number is already marked false, then we skip it to avoid repetative work
    if (!nums[num])
    {
      continue;
    }

    nums[num] = false;
    int currentLength = 1;
    int left = num - 1;
    int right = num + 1;

    // Find the left most range
    while (nums.find(left) != nums.end())
    {
      nums[left] = false;
      currentLength++;
      left--;
    }

    // Find the right most range
    while (nums.find(right) != nums.end())
    {
      nums[right] = false;
      currentLength++;
      right++;
    }

    // Check if current is longer than longest
    if (currentLength > longestLength)
    {
      longestLength = currentLength;
      bestRange = {left + 1,
                   right - 1};
    }
  }

  return bestRange;
}