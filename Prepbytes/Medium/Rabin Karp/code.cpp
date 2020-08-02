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
void rabin_karp(string T, string P, int d, int q)
{
  int n = T.length();
  int m = P.length();

  int h = (int)pow(d, m - 1);
  int p = 0;
  int t[n - m + 1];
  t[0] = 0;
  for (int i = 0; i < m; i++)
  {
    p = (d * p + (P[i] - 'a')) % q;
    t[0] = (d * t[0] + (T[i] - 'a')) % q;
  }

  for (int s = 0; s <= n - m; s++)
  {
    if (p == t[s])
    {
      if (charMatch(T, P, s, m))
      {
        cout << "Pattern match after " << s << "shifts\n";
      }
    }
    if (s < n - m)
    {
      t[s + 1] = (d * (t[s] - ((T[s] - 'a') * h) + T[s + m] - 'a')) % q;
    }
  }
}

int main()
{
  string T;
  cin >> T;
  string P;
  cin >> P;

  int d = 26;         // radix for 26 chars
  int q = 1000000007; // to prevent overflow

  rabin_karp(T, P, d, q);
}
