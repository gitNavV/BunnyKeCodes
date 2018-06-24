#include <bits/stdc++.h>
using namespace std;

int gcd(int a , int b)
{
   if(b==0) return a;
   a%=b;
   return gcd(b,a);
}

int main() {
	long long int n,k,g;
	cin>>n>>k;
	long long int p=pow(10,k);
	g=gcd(p,n);
	cout<<n*(p/g);
	return 0;
}