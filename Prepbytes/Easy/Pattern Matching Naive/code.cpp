#include <bits/stdc++.h>

using namespace std;
bool charMatch(string t, string p, int s, int m)
{
  for (int j = 0; j < m; j++)
  {
    if (p[j] != t[s + j])
    {
      return false;
    }
  }

  return true;
}

void naive_string_matching(string t, string p)
{
  int n = t.length();
  int m = p.length();
  for (int s = 0; s <= n - m; s++)
  {
    if (charMatch(t, p, s, m))
    {
      cout << "Pattern matches after " << s << " shifts";
    }
  }
}

int main()
{
  string t;
  cin >> t;

  string p;
  cin >> p;

  naive_string_matching(t, p);
}