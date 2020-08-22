#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string str);
// Brute force
// O(n^3) time | O(1) space
string longestPalindromicSubstring(string str)
{
  string longest = "";
  for (int i = 0; i < str.length(); i++)
  {
    for (int j = i; j < str.length(); j++)
    {
      string substring = str.substr(i, j + 1 - i);
      if (substring.length() > longest.length() && isPalindrome(substring))
      {
        longest = substring;
      }
    }
  }
  return longest;
}
bool isPalindrome(string str)
{
  int leftIdx = 0;
  int rightIdx = str.length() - 1;
  while (leftIdx < rightIdx)
  {
    if (str[leftIdx] != str[rightIdx])
    {
      return false;
    }
    leftIdx++;
    rightIdx--;
  }
  return true;
}