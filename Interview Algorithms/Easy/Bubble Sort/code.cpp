#include <bits/stdc++.h>

using namespace std;

vector<int> bubbleSort(vector<int> array)
{
  for (int i = 0; i < array.size(); i++)
  {
    for (int j = i + 1; j < array.size(); j++)
    {
      if (array[j] > array[j + 1])
      {
        swap(array[j], array[i]);
      }
    }
  }

  for (int i = 0; i < array.size(); i++)
  {
    cout << array[i] << " ";
  }
  cout << endl;
}

int main()
{
  vector<int> array{9, 8, 7, 6, 5, 4, 3, 2, 1};

  bubbleSort(array);
}