// Time: O(n) | Space: O(n)

#include <bits/stdc++.h>

using namespace std;
bool helperPalindromeCheck(string s, int i)
{
  int j = s.length() - 1 - i; // acts as right pointer
  return i >= j ? true : s[i] == s[j] && helperPalindromeCheck(s, i + 1);
}
bool palindromeCheck(string s)
{
  return helperPalindromeCheck(s, 0);
}

int main()
{
  string s;
  cin >> s;

  cout << palindromeCheck(s);
}