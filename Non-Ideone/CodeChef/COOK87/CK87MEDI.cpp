#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n=0,k=0;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		cout<<a[(n+k)/2]<<"\n";
	}
	return 0;
} 
