#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int items;
  cin>>items;
  
  for(int i = 0; i < items; i++) {
    float quant, cost;
    
    cin>>quant>>cost;
    quant = quant;
    cost = cost;
    if(quant > 100) {
      printf("%0.1f", quant*cost - (quant*cost)*(20.0/100.0));
    } else {
      printf("%0.1f",quant*cost);
    }
    
    cout << endl;
    // cout << "float value" << 20.0/100.0<<endl<<"quant: "<<quant<<endl<<"cost:"<<cost<<endl;
  }
  return 0;
}