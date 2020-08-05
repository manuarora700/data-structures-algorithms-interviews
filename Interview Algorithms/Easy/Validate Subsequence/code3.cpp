// Vector approach

#include <bits/stdc++.h>

using namespace std;
// O(n) time | O(1) space - where n is the length of the array
bool isValidSubsequence(vector<int> array, vector<int> sequence)
{
  int seqIdx = 0;
  for (auto value : array)
  {
    if (seqIdx == sequence.size())
      break;
    if (sequence[seqIdx] == value)
      seqIdx++;
  }
  return seqIdx == sequence.size();
}