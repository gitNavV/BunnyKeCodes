#include <iostream>
using namespace std;
 
int main() {
	int n,t;
	cin>>t
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			if(i<=n-92682) cout<<"0 ";
			else cout<<i+92682-n<<" ";
		}
		cout<<"\n";
	}
	return 0;
}