#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t,c=0;
	char n;
	cin>>t;
	set <char> a;
	for(int i=0; i<t; i++)
	{
		cin>>n;
		a.insert(n);
	}
	set <char>::iterator iter;
	for(iter=a.begin();iter!=a.end();++iter)
	{
		if(islower(*iter)) c++;
	}
	cout<<c;
	return 0;
}
