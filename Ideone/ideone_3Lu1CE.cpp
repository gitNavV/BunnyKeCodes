#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,k;
	cin>>n>>k;
	long long int p=pow(10,k);
	for(long long int i=p;i!=-1;i+=p)
	{
		if(i%n==0) {cout<<i; i=-1; break;}
	}
	return 0;
}