#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,l,m,t,n,x=0,y=0,z=0,sum=0,count=0;
    cin>>n;
   // sum=n;
  //  vector<long long int> a(m+5,0);
    for(t=0;t<n;t++){
        cin>>y>>x;
        m=0;
        for(j=1;j<=x;j++){
            l=y%j;
             if((l)>m){
                 m=l;
             }  
        }
cout<<m<<endl;
        }
    }
