#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t,a,b,c,d;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		c=b%4;
		if(b==0) cout<<"1\n";
		else if(c!=0) { d=pow(a,c); cout<<d%10<<"\n"; }
		else { d=pow(a,4); cout<<d%10<<"\n"; }
	}
	return 0;
}