#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
for(int m=0;m<t;m++)
{
int n,k;
cin>>n>>k;
vector<int> a;
vector<int> b;
vector<int> c;
for(int i=0;i<n;i++)
{
int val;
cin>>val;
a.push_back(val);
}
for(int i=0;i<n;i++)
{
int val;
cin>>val;
b.push_back(val);
}
for(int i=0;i<k;i++)
{
int val;
cin>>val;
c.push_back(val);
}
vector<int> bun;
 
for(int i=0;i<a.size();i++)
{
for(int j=0;j<b[i];j++)
{
bun.push_back(a[i]);
}
}
sort(bun.begin(),bun.end());
	for(int i=1;i<=k;i++)
	{
		if(i%2==0)
		{
			bun.erase(bun.begin()+c[i-1],bun.begin()+bun.size());
		}
		else
		{
			bun.erase(bun.begin(),bun.begin()+bun.size()-c[i-1]);
		}
	}
	int s=0;
	for(int i=0;i<bun.size();i++)
	{
		s+=bun[i];
	}
	cout<<s<<"\n";
}
return 0;	
}  
