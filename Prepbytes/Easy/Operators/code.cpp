#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int x, y;
  cin>>x>>y;
  
  if(x > y) cout << x <<" is greater than " << y;
  else if (x < y) cout << x << " is smaller than " << y;
  else cout << x << " is equal to " << y;
  return 0;
}