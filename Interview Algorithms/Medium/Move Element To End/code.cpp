// Time: O(n) | Space: O(1)s

#include <bits/stdc++.h>

using namespace std;

vector<int> moveElementToEnd(vector<int> &arr, int target)
{
  int start = 0;
  int end = arr.size() - 1;

  while (start < end)
  {
    while (start < end && arr[end] == target) // imp stat start < end
    {
      end--;
    }
    if (arr[start] == target)
    {
      swap(arr[start], arr[end]);
    }
    start++;
  }

  return arr;
}

int main()
{
  vector<int> arr{2, 1, 2, 2, 2, 3, 4, 2};

  moveElementToEnd(arr, 2);

  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
}