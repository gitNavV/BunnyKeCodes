#include <iostream>
using namespace std;

int main() {
	
	long t,m,x;
	cin>>t;
	for(long i=0;i<t;i++)
	{
		x=0;
		cin>>m;
		for(long j=5;j<=m;j*=5)
		{
			x+=m/j;
		}
		cout<<x<<"\n";
	}

	return 0;
}