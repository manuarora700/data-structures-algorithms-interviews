#include <bits/stdc++.h>

using namespace std;

vector<int> moveElementToEnd(vector<int> &arr, int target)
{
  int start = 0;
  int end = arr.size() - 1;

  while (start < end)
  {
    // cout << "While itni baar chala\n";
    while (start < end && arr[end] == target)
    {
      end--;
    }
    if (arr[start] == target)
    {
      // cout << "Else if me agaye\n";
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