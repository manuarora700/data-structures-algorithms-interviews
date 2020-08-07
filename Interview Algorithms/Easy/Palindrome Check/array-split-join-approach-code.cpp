// Time: O(n) | Space: O(n)

#include <bits/stdc++.h>

using namespace std;

bool palindromeCheck(string s)
{
  vector<char> reversedChars;

  for (int i = s.length() - 1; i >= 0; i--)
  {
    reversedChars.push_back(s[i]);
  }

  return s == string(reversedChars.begin(), reversedChars.end); // JS ke join jaisa hai yeh
}

int main()
{
  string s;
  cin >> s;

  cout << palindromeCheck(s);
}