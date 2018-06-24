#include<iostream>
#include<cmath>
 
using namespace std;
 
int main()
{
 long long t,s=0;
 long long n,m;
 cin>>t;
 for(long long i=0;i<t;i++)
  {
   cin>>n>>m;
   for(long long j=0;j<(n-1);j++)
   {
    s+=pow(2,j);
   }
   s+=pow(2,(n+m)-1);
   cout<<s<<"\n";
   s=0;
  }
 return 0;
} 
