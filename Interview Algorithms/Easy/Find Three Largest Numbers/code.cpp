// Time: (n) | Space: O(1)
#include <bits/stdc++.h>

using namespace std;
void updateLargest(vector<int> *threeLargest, int num);

void shiftAndUpdate(vector<int> *threeLargest, int num, int idx);

vector<int> findThreeLargest(vector<int> array)
{
  vector<int> threeLargest{INT_MIN, INT_MIN, INT_MIN};

  for (int num : array)
  {
    updateLargest(&threeLargest, num);
  }

  cout << endl;
  cout << "Three largest are: ";
  for (int i = 0; i < threeLargest.size(); i++)
  {
    cout << threeLargest[i] << " ";
  }
}

void updateLargest(vector<int> *threeLargest, int num)
{
  if (num > threeLargest->at(2))
  {
    shiftAndUpdate(threeLargest, num, 2);
  }
  else if (num > threeLargest->at(1))
  {
    shiftAndUpdate(threeLargest, num, 1);
  }
  else if (num > threeLargest->at(0))
  {
    shiftAndUpdate(threeLargest, num, 0);
  }
}

// [0, 1, 2]
// [x, y, z]
// if i == idx array[i] = num
// else arr[i] = arr[i+1];
// [y, y, z];
// [y, z, z];
// [y, z, num];
void shiftAndUpdate(vector<int> *threeLargest, int num, int idx)
{
  for (int i = 0; i <= idx; i++)
  {
    if (i == idx)
    {
      threeLargest->at(i) = num;
    }
    else
    {
      threeLargest->at(i) = threeLargest->at(i + 1);
    }
  }
}

int main()
{
  vector<int> array{1, 2, 3, 4, 5, 6, 7, 8, 9};
  int n;
  cin >> n;

  findThreeLargest(array);
}