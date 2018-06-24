#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		cin>>x>>y;
		if(x==1&&y==1)
		{
		char a[s.size()],b[s.size()];
		for(int i=0,j=0;i<s.size(),j<s.size();i++)
		{
			if(s[i]=='a') a[j++]=s[i];
		}
		for(int i=0,j=0;i<s.size(),j<s.size();i++)
		{
			if(s[i]=='b') b[j++]=s[i];
		}
		cout<<a<<" "<<b<<"\n";
		/* if(b.size()<=a.size()){
		for(int i=0,j=0;i<a.size();i++)
		{
			cout<<a[i];
			if(j<b.size()) {cout<<b[j]; j++;}
		}
		}
		else if(a.size()<b.size()){
		for(int i=0,j=0;j<b.size();j++)
		{
			cout<<b[j];
			if(i<a.size()) {cout<<a[i]; i++;}
		}
		}
		}*/
		cout<<"\n";
		}
	}
	return 0;
}