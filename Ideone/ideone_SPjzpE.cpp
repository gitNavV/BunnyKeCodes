#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    if (n==0 || n==1)
        return n;
    int temp[n];
    int j = 0;
    for (int i=0; i<n-1; i++)
        if (arr[i] != arr[i+1])
            temp[j++] = arr[i];
    temp[j++] = arr[n-1];
    for (int i=0; i<j; i++)
        arr[i] = temp[i];
    return j;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n],i,j,l;
		for(l=0;l<n;l++) cin>>a[l];
		sort(a,a+n);
		n=removeDuplicates(a,n);
		for(i=0,j=0;i<=a[n-1];i++)
		{
			if(k>=0)
			{
				if(a[j]!=i) {k--;}
				else {j++;}
			}
			if(k==-1) break;
			else if(j==n) break;
		}
		if(k==-1) cout<<i;
		else if(j==n) cout<<a[n-1]+1+k;
		if(t>0) cout<<"\n";
	}
	return 0;
}