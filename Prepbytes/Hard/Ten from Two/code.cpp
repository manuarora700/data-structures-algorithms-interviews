#include <bits/stdc++.h>
using namespace std;

int countN(int);
int main()
{
  //write your code here
  int t;
  cin>>t;
  
  for(int i = t; i > 0; i--) {
    int num;
    cin>>num;
    
    cout<<countN(num)<<endl;
  }
  return 0;
}

int countN(int num) {
  int count = 0;
  if(num % 5 == 0) {
    while(num % 10 != 0 ) {
      num = num*2;
      count++;
    }
    return count;
  } else {
    return -1;
  }
}