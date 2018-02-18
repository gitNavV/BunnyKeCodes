#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n)
{
    bool prime[n+1];
    int ap[100000000]={0};
    memset(prime, true, sizeof(prime));

    for(int p=2;p*p<=n; p++)
    {
        if(prime[p]==true)
        {
        	for(int i=p*p;i<=n;i+=p)
                prime[i]=false;
        }
    }
    for(int p=2,i=1;p<=n;p++)
      {
      if(prime[p])
          {
          	ap[i++]=p;
          }
      }
    for(int i=1;ap[i]!=0;i+=100) cout<<ap[i]<<"\n";
}

int main()
{
    int n=100000000;
    SieveOfEratosthenes(n);
    return 0;
}