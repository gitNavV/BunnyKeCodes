#include <bits/stdc++.h>
using namespace std;

int power(long long int a,long long int n,long long int p)
{
    long long int res=1;
    a=a%p;
    while (n>0)
    {
        if(n&1)
            res=(res*a)%p;
         n=n>>1;
        a=(a*a)%p;
    }
    return res;
}

string isPrime(long long int n,long long int k)
{
   if (n<=1||n==4) return "NO";
   if (n<=3) return "YES";
   while (k>0)
   {
       long long int a=2+rand()%(n-4);  
        if (power(a,n-1,n)!=1)
          return "NO";
       k--;
   }
    return "YES";
}
 
int main()
{
    long long int k=1,t;
    long long int j;
    cin>>t;
    string s;
    while(t--)
    {
    	cin>>j;
    	s=isPrime(j,k);
    	cout<<s<<"\n";
    }
    return 0;
}