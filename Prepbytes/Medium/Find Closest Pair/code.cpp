#include <bits/stdc++.h>

using namespace std;

int findClosest(int arr[], int size, int target)
{
  int low = 0, high = size - 1;

  if (target < arr[low])
    return arr[low];
  else if (target > arr[high])
    return arr[high];

  while (low <= high)
  {
    int mid = (low + high) / 2;

    if (arr[mid] == target)
      return arr[mid];

    if (arr[mid] > target)
    {
      // check if target lies between the mid two numbers
      if (mid > 0 && arr[mid - 1] < target)
      {
        return min(target - arr[mid], arr[mid] - target);
      }
      high = mid - 1;
    }
    else
    {
      // if arr[mid] < target
      if (arr[mid + 1] > target)
      {
        return min(target - arr[mid + 1], arr[mid] - target);
      }
      low = mid + 1;
    }
  }
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int size;
    cin >> size;

    int arr[size];
    int target;
    cin >> target;
    for (int i = 0; i < size; i++)
    {
      cin >> arr[i];
    }

    cout << findClosest(arr, size, target);
  }
}