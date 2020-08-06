#include <bits/stdc++.h>

using namespace std;

int helperFib(int n, unordered_map<int, int> memoize)
{
  if (memoize.find(n) != memoize.end())
  {
    return memoize[n];
  }
  else
  {
    memoize[n] = helperFib(n - 1, memoize) + helperFib(n - 2, memoize);

    return memoize[n];
  }
}

int getFib(int n)
{
  // Hash table -- initialized with n==1 and n==2
  unordered_map<int, int> memoize({{1, 0}, {2, 1}});

  return helperFib(n, memoize);
}