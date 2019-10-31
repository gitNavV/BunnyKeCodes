#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int i,j,k,l,m,t,n,x=0,y=0,z=0,sum=0,count=0;
    vector<int> a(100001,0);
    cin>>t;
    for(i=0;i<t;i++){
        sum=0,z=0;
     cin>>x;
     sum+=x;
     y=x;
     while(y!=0){
         y=y/10;
         z++;
     }
  
     m=pow(10,z-1);
     l=10;
       // cout<<m<<" "<<l<<" ";
     sum=(sum/m)+(sum%l);
     cout<<sum<<endl;
    }
}
