#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  std::cin >> t;

  while (t--)
  {
    int size;
    std::cin >> size;
    ;

    int arr[size];

    // Populate array
    for (int i = 0; i < size; i++)
    {
      std::cin >> arr[i];
    }

    int start, end;
    for (start = 0; start < size - 1; start++)
    {
      if (arr[start] > arr[start + 1])
        break; //starting index found
    }

    for (end = size - 1; end >= 0; end--)
    {
      if (arr[end] < arr[end - 1])
        break; //ending index found
    }

    int max = INT_MIN, min = INT_MAX;

    // find maximum and minimum in the window -- which will later be compared in lh array and rh array
    for (int i = start; i <= end; i++)
    {
      if (max < arr[i])
        max = arr[i];
      if (min > arr[i])
        min = arr[i];
    }

    // Check min and max and edit the start and end position
    for (int i = 0; i < start; i++)
    {
      if (arr[i] > min)
        start = i;
    }

    for (int i = end; i < size; i++)
    {
      if (arr[i] < max)
        end = i;
    }

    std::cout << start << " " << end << std::endl;
  }
  return 0;
}