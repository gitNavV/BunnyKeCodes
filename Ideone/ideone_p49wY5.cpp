#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t,x,y;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		cin>>x>>y;
		string a="",b="";
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='a') a.append(1u,s[i]);
			else b.append(1u,s[i]);
		}
		int k=a.size();
		int l=b.size();
		int g=l;
		int h=k;
		string c="";
		if(k/x>=l/y)
		{
		for(int i=0;i<(k/x+k%x);i++)
		{
			for(int j=i*x;j<i*x+x&&a[j]!='\0';j++) c.append(1u,a[j]);
			if(g>0) {for(int n=i*y;n<i*y+y&&b[n]!='\0';n++) {g--; c.append(1u,b[n]);}}
			else if(g==0&&i<(k/x+k%x-1)) c.append(1u,'*');
		}
		}
		else
		{
		for(int i=0;i<(l/y+l%y);i++)
		{
			for(int j=i*y;j<i*y+y&&b[j]!='\0';j++) c.append(1u,b[j]);
			if(h>0) {for(int n=i*x;n<i*x+x&&a[n]!='\0';n++) {h--; c.append(1u,a[n]);}}
			else if(h==0&&i<(l/y+l%y-1)) c.append(1u,'*');
		}
		}
		cout<<c;
		if(t>0) cout<<"\n";
		}
	return 0;
} 