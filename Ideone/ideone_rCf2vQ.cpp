#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	string s;
	set <string> cf;
	cin>>t;
	n=t;
	while(t--)
	{
		cin>>s;
		cf.insert(s);
		if(cf.size()!=n-t) {cout<<"YES"; n-=1;}
		else cout<<"NO";
		if(t>0) cout<<"\n";
	}
	return 0;
}