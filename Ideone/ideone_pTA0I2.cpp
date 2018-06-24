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
		if(x==1&&y==1){
		string a="",b="";
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='a') a+=s[i];
			else b+=s[i];
		}
		if(b.size()<a.size())
		{
			for(int i=1;i<=(a.size()-b.size()-1);i++) b+='*';
		}
		else if(a.size()<b.size())
		{
			for(int i=1;i<=(b.size()-a.size()-1);i++) a+='*';
		}
		cout<<a<<b<<"    \n   ";
		if(b.size()<=a.size()){
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
		}
		cout<<"\n";
	}
	return 0;
}