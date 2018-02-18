#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t
	string a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(b%4!=0) c=pow(a[a.size()-1],(b%4));
		else c=pow(a[a.size()-1],4);
		cout<<c<<" ";
		cout<<c%10<<"\n";
	}
	return 0;
}