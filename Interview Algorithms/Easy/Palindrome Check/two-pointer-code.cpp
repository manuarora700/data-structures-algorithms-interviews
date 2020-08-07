// Time: O(n) | Space: O(1)

#include <bits/stdc++.h>

using namespace std;

bool palindromeCheck(string s)
{
  int left = 0;
  int right = s.length() - 1;

  while (left < right)
  {
    if (s[left] == s[right])
    {
      left++;
      right--;
    }
    else
    {
      cout << "False";
      return false;
    }
  }
  cout << "True";
  return true;
}

int main()
{
  string s;
  cin >> s;

  cout << palindromeCheck(s);
}