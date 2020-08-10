//  Time: O(n) | Space: O(1)
#include <bits/stdc++.h>

using namespace std;

int longestPeak(vector<int> arr)
{
  int longestPeakLength = 0;
  int i = 1;
  int size = arr.size();
  while (i < size - 1)
  {
    int isPeak = arr[i] > arr[i - 1] && arr[i] > arr[i + 1];
    if (!isPeak)
    {
      i++;
      continue;
    }
    int leftIdx = i - 2;
    while (leftIdx >= 0 && arr[leftIdx] < arr[leftIdx + 1])
    {
      leftIdx--;
    }
    int rightIdx = i + 2;
    while (rightIdx <= size - 1 && arr[rightIdx] < arr[rightIdx - 1])
    {
      rightIdx++;
    }
    int currentPeakLength = rightIdx - leftIdx - 1;
    longestPeakLength = max(longestPeakLength, currentPeakLength);
    i = rightIdx;
  }

  return longestPeakLength;
}