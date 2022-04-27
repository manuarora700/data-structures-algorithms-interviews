#include <iostream>
#include <vector>

using namespace std;
int binarySearch(vector<int> array, int target);
int binarySearchHelper(vector<int> array, int target, int left, int right);
// O(log(n)) time | O(1) space
int binarySearch(vector<int> array, int target)
{
  return binarySearchHelper(array, target, 0, array.size() - 1);
}
int binarySearchHelper(vector<int> array, int target, int left, int right)
{
  while (left <= right)
  {
    int middle = (left + right) / 2;
    int potentialMatch = array[middle];
    if (target == potentialMatch)
    {
      return middle;
    }
    else if (target < potentialMatch)
    {
      right = middle - 1;
    }
    else
    {
      left = middle + 1;
    }
  }
  return -1;
}

int main()
{
  vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int target = 5;
  cout << binarySearch(array, target) << endl;
  return 0;
}