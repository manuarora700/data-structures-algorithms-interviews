#include <bits/stdc++.h>
using namespace std;
// O(n) time | O(1) space
vector<int> searchInSortedMatrix(vector<vector<int>> matrix, int target)
{
  int row = 0;
  int col = matrix[0].size() - 1;
  while (row < matrix.size() && col >= 0)
  {
    if (matrix[row][col] > target)
    {
      col--;
    }
    else if (matrix[row][col] < target)
    {
      row++;
    }
    else
    {
      return {row, col};
    }
  }
  return {-1, -1};
}