#include <bits/stdc++.h>
using namespace std;
void permutationsHelper(int i, vector<int> *array,
                        vector<vector<int>> *permutations);
void swap(vector<int> *array, int i, int j);
// O(n*n!) time | O(n*n!) space
vector<vector<int>> getPermutations(vector<int> array)
{
  vector<vector<int>> permutations;
  permutationsHelper(0, &array, &permutations);
  return permutations;
}
void permutationsHelper(int i, vector<int> *array,
                        vector<vector<int>> *permutations)
{
  if (i == array->size() - 1)
  {
    permutations->push_back(*array);
  }
  else
  {
    for (int j = i; j < array->size(); j++)
    {
      swap(array, i, j);
      permutationsHelper(i + 1, array, permutations);
      swap(array, i, j);
    }
  }
}
void swap(vector<int> *array, int i, int j)
{
  int tmp = array->at(i);
  array->at(i) = array->at(j);
  array->at(j) = tmp;
}