#include <bits/stdc++.h>
using namespace std;
// O(n*2^n) time | O(n*2^n) space
vector<vector<int>> powerset(vector<int> array)
{
  vector<vector<int>> subsets = {{}};
  for (int ele : array)
  {
    int length = subsets.size();
    for (int i = 0; i < length; i++)
    {
      vector<int> currentSubset = subsets[i];
      currentSubset.push_back(ele);
      subsets.push_back(currentSubset);
    }
  }
  return subsets;
}