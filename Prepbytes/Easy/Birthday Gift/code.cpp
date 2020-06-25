#include <bits/stdc++.h>
  using namespace std;
  
int main()
{
    long long int a,b,c;
    cin>>a>>b>>c;
    if(b==a)
        std::cout<<"YES"<<std::endl;
        else if(a>b&&c>0||a<b&&c<0)
            std::cout<<"NO"<<std::endl;
        else if(c==0)
        {
            if(a==b)
                std::cout<<"YES"<<std::endl;
            else
                std::cout<<"NO"<<std::endl;
        }

    else
    {
        long long int u=b-a;
        if(u%c==0)
             std::cout<<"YES"<<std::endl;
        else
            std::cout<<"NO"<<std::endl;
    }
    return 0;
}