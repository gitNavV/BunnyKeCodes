#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int a[t];
	for(int i=0; i<t; i++)
	{
		cin>>a[i];
	}
	sort(a,a+t);
	if((a[0]==a[(t/2)-1])&&(a[t/2]==a[t-1])&&a[0]!=a[t-1])
	{			
		cout<<"YES\n"<<a[0]<<" "<<a[t/2];
	}
	else cout<<"NO\n";
	return 0;
}