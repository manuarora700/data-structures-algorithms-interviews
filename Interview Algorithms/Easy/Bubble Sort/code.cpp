// Time: O(n^2) | Space: O(1)

#include <bits/stdc++.h>

using namespace std;

vector<int> bubbleSort(vector<int> array)
{
  for (int i = 0; i < array.size(); i++)
  {
    int swapVal = 0;
    for (int j = i + 1; j < array.size(); j++)
    {
      if (array[j] > array[j + 1])
      {
        swap(array[j], array[i]);
        swapVal = 1;
      }
    }
    if (swapVal == 0)
    {
      // lil optimization
      for (int i = 0; i < array.size(); i++)
      {
        cout << array[i] << " ";
      }
      cout << endl;
      return array;
    }
  }
}

int main()
{
  vector<int> array{9, 8, 7, 6, 5, 4, 3, 2, 1};

  bubbleSort(array);
}