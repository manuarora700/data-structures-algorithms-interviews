#include <bits/stdc++.h>
using namespace std;
bool leap(int);
int main()
{
  //write your code here
  
  int t;
  cin>>t;
  for(int i = t; i >0; i--) {
    int year;
    cin>>year;
    
    leap(year) ? cout << "Yes\n" : cout << "No\n";
  }
  return 0;
}

bool leap(int year) {
  
  if(year % 400 == 0) return true;
  if(year % 100 == 0) return false;
  if(year % 4 == 0) return true;
  return false;
}