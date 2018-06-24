#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	
		int n,k;
		cin>>n>>k;
		int a[n],i,j,l;
		for(l=0;l<n;l++) cin>>a[l];
		sort(a,a+n);
		for(i=0,j=0;i<=a[n-1];i++)
		{
			if(k==-1||(j==n-1&&k==0)) break;
			else if(k>=0)
			{
				if(a[j]!=i) {k--;}
				else {j++;}
			}
		}
		if(k==-1) cout<<i-1<<"\n";
		else if(j==n-1&&k==0) cout<<a[n-1]+1+k<<"\n";
	
	return 0;
}