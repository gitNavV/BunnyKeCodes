#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
long t,m,n,x;
cin>>t;
for(long i=0;i<t;i++)
{
cin>>m>>n;
while(m<=n)
{
x=0;
for(long j=2;j<=sqrt(m);j++)
{
if(m%j==0) {x=1; break;}
}
if(m>1)
{
if(x==0) cout<<m<<"\n";}
m++;
}
cout<<"\n";
}
return 0;
}