#include <iostream>
using namespace std;
 
int main() {
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++)
		{
			a[i]=i;
		}
		for(int i=1;i<=n;i++)
		{
			int temp;
			if(a[i]==i) {if(i<n) {temp=a[i]; a[i]=a[i+1]; a[i+1]=temp;} else {temp=a[i-1]; a[i-1]=a[i]; a[i]=temp;}}
		}
		for(int i=1;i<=n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
} 
