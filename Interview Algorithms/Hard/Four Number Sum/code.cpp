#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> fourNumberSum(vector<int> array, int target)
{
  unordered_map<int, vector<vector<int>>> allPairsSum;
  vector<vector<int>> quadruples{};

  for (int i = 1; i < array.size() - 1; i++)
  {
    for (int j = i + 1; j < array.size(); j++)
    {
      int currentSum = array[i] + array[j];
      int diff = target - currentSum;

      if (allPairsSum.find(diff) != allPairsSum.end())
      {
        // found a difference and a pair
        for (vector<int> pair : allPairsSum[diff])
        {
          pair.push_back(array[i]);
          pair.push_back(array[j]);
          quadruples.push_back(pair);
        }
      }
    }

    // Now fill the HT -- to avoid duplicate entries
    for (int k = 0; k < i; k++)
    {
      int currentSum = array[k] + array[i];
      //if not in HT
      if (allPairsSum.find(currentSum) == allPairsSum.end())
      {
        // initialize that sum with the array of pairs
        allPairsSum[currentSum] = vector<vector<int>>{{array[k], array[i]}};
      }
      else
      {
        allPairsSum[currentSum].push_back(vector<int>{array[i], array[k]});
      }
    }
  }

  return quadruples;
}