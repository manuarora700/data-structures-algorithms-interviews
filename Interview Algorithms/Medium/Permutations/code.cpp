#include <bits/stdc++.h>
using namespace std;

void permutationsHelper(vector<int> array, vector<int> currentPermutations, vector<vector<int>> *permutations);

// Upper Bound: O(n^2 * n!) Time | Space: O(n*n!)
// Roughly: O(n*n!) Time | Space: O(n*n!)

vector<vector<int>> getPermutations(vector<int> array)
{
  vector<vector<int>> permutations;

  permutationsHelper(array, {}, &permutations);
  return permutations;
}

void permutationsHelper(vector<int> array, vector<int> currentPermutations, vector<vector<int>> *permutations)
{
  if (array.size() == 0 && currentPermutations.size() > 0)
  {
    permutations->push_back(currentPermutations);
  }
  else
  {
    for (int i = 0; i < array.size(); i++)
    {
      vector<int> newArray;
      newArray.insert(newArray.end(), array.begin(), array.begin() + i);
      newArray.insert(newArray.end(), array.begin() + i + 1, array.end());
      vector<int> newPermutation = currentPermutations;
      newPermutation.push_back(array[i]);
      permutationsHelper(newArray, newPermutation, permutations);
    }
  }
}