#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	int t,m=0,p=0;
	char n;
	cin>>t;
	set <char> a;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		if(islower(n)) {a.insert(n); p=a.size();}
		else {m=m>a.size()?m:a.size(); a.erase(a.begin(),a.end());}
	}
	cout<<max(m,p);
	return 0;
}