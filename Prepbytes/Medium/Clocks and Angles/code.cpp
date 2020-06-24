#include <bits/stdc++.h>
using namespace std;

int computeAngle(int, int);
int main()
{
  //write your code here
  int t;
  cin>>t;
  
  for(int i = t; i > 0; i--) {
    float h, m;
    cin>>h;
    cin>>m;
    
    cout << computeAngle(h, m) << endl;
  }
  return 0;
}


int computeAngle(int h, int m) {
  float hourAngle, minAngle;
  
  // Calculate hour angle
  hourAngle = ((float)h + (float)m/60)*360/12;
  minAngle = 360*(float(m)/60);
  int total = hourAngle - minAngle;
  // return hourAngle - minAngle;
  if(total > 360/2) total = 360 - total;

  if(total > 0) return total;
  else return (-1)*total;
}