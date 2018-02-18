#include <iostream>
using namespace std;

int main() 
{
	int t,n;
	long long int p;
	cin>>t;
	while(t--)
	{
		int c=0,d=0;
		cin>>n>>p;
		int a[n];
		while(n--)
		{
			cin>>a[n];
			if(a[n]<=p/10) c++;
			else if(a[n]>=p/2) d++;
		}
		if(c==2&&d==1) cout<<"yes";
		else cout<<"no";
		if(t>0) cout<<"\n";
	}
	return 0;
}