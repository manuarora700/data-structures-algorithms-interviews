#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int boxes;
  cin>>boxes;
  int count = 0;
  for(int i = 0; i < boxes; i++) {
    int present, capacity;
    cin>>present>>capacity;
    
    if(capacity - present >=2 ) count++;
  }
  
  cout << count;
  return 0;
}