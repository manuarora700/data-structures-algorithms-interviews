#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  char c;
  cin>>c;
  
  if(c == 'P' || c == 'p') cout << "Paaji";
  else if(c == 'Z' || c == 'z') cout << "Zenith";
  else if(c == 'E' || c == 'e') cout << "Expert Coder";
  else if(c == 'D' || c == 'd') cout << "Data Structure";
  else cout << "none";
  return 0;
}