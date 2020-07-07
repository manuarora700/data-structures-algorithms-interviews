#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    std::cin >> t;
    
    while(t--) {
      int size;
      std::cin >> size;
      
      char array[size];
      
      for(int i = 0; i < size; i++) {
        std::cin>>array[i];
      }
      
      int count = 0;
      for(int i = 0; i < size; i++) {
        if(array[i] == 'x') count++;
      }
      
      std::cout<<count<<std::endl;
    }
    
    return 0;
  }