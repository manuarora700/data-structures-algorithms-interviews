#include <bits/stdc++.h>

using namespace std;

// Time: O(nd) | Space: O(n)
int numberOfWaysToMakeChange(vector<int> denominations, int targetAmount)
{
  vector<int> ways(targetAmount + 1); // dp array
  ways[0] = 1;

  for (int denom : denominations)
  {
    for (int amount = 1; amount < targetAmount + 1; amount++)
    {
      if (denom <= amount)
      {
        ways[amount] += ways[amount - denom];
      }
    }
  }
}