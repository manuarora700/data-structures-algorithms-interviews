#include <bits/stdc++.h>

using namespace std;

// static vector<int> pi;

void COMPUTE_PREFIX(string P, int pi[])
{
  int m = P.length();
  pi[0] = 0;
  int k = 0;
  for (int q = 1; q < m; q++)
  {
    while (k > 0 && P[k] != P[1])
    {
      k = pi[k];
    }
    if (P[k] == P[q])
    {
      k = k + 1;
    }
    pi[q] = k;
  }
}

void KMP_Algo(string T, string P)
{
  int n = T.length();
  int m = P.length();

  int pi[m];

  COMPUTE_PREFIX(P, pi);

  int q = 0;
  for (int i = 0; i < n; i++)
  {
    while (q > 0 && P[q] != T[i])
      q = pi[q];
    if (P[q] == T[i])
      q = q + 1;
    if (q == m)
    {
      cout << "PAttern matches after " << (i - m + 1) << " index";
      q = pi[q - 1];
    }
  }
}
int main()
{
  string T;
  string P;

  cin >> T >> P;

  KMP_Algo(T, P);

  return 0;
}