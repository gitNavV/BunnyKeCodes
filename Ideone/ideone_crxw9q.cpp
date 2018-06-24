#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	set <int> a;
	for(int i=0; i<t; i++)
	{
		cin>>n;
		a.insert(n);
	}
	set<int>::iterator iter;
	if((a.size()==2)&&(t%a.size()==0))
	{
		cout<<"YES\n";
		for(iter=a.begin();iter!=a.end();++iter)
		{
			cout<<(*iter)<<" ";
		}
	}
	else cout<<"NO\n";
	return 0;
}