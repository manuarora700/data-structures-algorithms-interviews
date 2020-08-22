#include <bits/stdc++.h>

using namespace std;

string longestPalindromicSubstring(string str)
{
  vector<int> currentLongest{0, 1};

  for (int i = 0; i < str.length(); i++)
  {
    vector<int> odd = getPalFrom(str, i - 1, i + 1);
    vector<int> even = getPalFrom(str, i - 1, i);

    vector<int> longest = odd[1] - odd[0] > even[1] - even[0] ? odd : even;
    vector<int> currentLongest = currentLongest[1] - currentLongest[0] > longest[1] - longest[0] ? currentLongest : longest;
  }
  return str.substr(currentLongest[0], currentLongest[1] - currentLongest[0]);
}

vector<int> getPalFrom(string str, int leftIdx, int rightIdx)
{
  while (leftIdx >= 0 && rightIdx <= str.length())
  {
    if (str[leftIdx] != str[rightIdx])
      break;

    leftIdx--;
    rightIdx++;
  }

  return vector<int>{leftIdx + 1, rightIdx};
}