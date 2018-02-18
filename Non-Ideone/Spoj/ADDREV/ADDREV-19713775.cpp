#include <iostream>
using namespace std;

int rev(int z)
{
	int temp=0;
	while(z)
	{
		temp=(temp*10)+(z%10);
		z/=10;
	}
	return temp;
	
}

int main() {
	
	int m,n,t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>m>>n;
		cout<<rev(rev(m)+rev(n))<<"\n";
	}

	return 0;
}