// Time: O(n^2) | Space: O(1)

#include <bits/stdc++.h>

using namespace std;

bool palindromeCheck(string s)
{

  string reversed = "";

  for (int i = s.length() - 1; i >= 0; i--)
  {
    reversed += s[i]; // concatination takes O(n)
  }

  return s == reversed;
}

int main()
{
  string s;
  cin >> s;

  cout << palindromeCheck(s);
}