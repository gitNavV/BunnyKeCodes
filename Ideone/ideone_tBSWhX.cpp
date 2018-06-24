#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
long long p,c=1,count=0;
cin>>p;
while(p-c>0&&c<701)
{
long long r=sqrt(p-c);
count+=r;
c++;
}
cout<<count<<endl;
}
return 0;
}