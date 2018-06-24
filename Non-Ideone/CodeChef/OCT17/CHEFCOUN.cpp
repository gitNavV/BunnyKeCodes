#include <iostream>
using namespace std;
 
int main() 
{
	int n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n-1;i++)
		{
			if(i<n-92681) cout<<"1 ";
			else cout<<i+92682-n<<" ";
		}
		cout<<92681-(n-92681);
		if(t>0) cout<<"\n";
	}
	return 0;
} 
