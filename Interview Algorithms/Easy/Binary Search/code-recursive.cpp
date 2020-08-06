#include <vector>
using namespace std;
int binarySearch(vector<int> array, int target);
int binarySearchHelper(vector<int> array, int target, int left, int right);
// O(log(n)) time | O(log(n)) space
int binarySearch(vector<int> array, int target)
{
  return binarySearchHelper(array, target, 0, array.size() - 1);
}
int binarySearchHelper(vector<int> array, int target, int left, int right)
{
  if (left > right)
  {
    return -1;
  }
  int middle = (left + right) / 2;
  int potentialMatch = array[middle];
  if (target == potentialMatch)
  {
    return middle;
  }
  else if (target < potentialMatch)
  {
    return binarySearchHelper(array, target, left, middle - 1);
  }
  else
  {
    return binarySearchHelper(array, target, middle + 1, right);
  }
}