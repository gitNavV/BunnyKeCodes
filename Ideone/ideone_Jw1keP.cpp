#include <bits/stdc++.h>
using namespace std;

int D(int x,int y)
{
	if(x%y==0) return x/y;
	else return x/y+1;
}

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
		int g=D(l,y);
		int h=D(k,x);
		int v=l;
		int u=k;
		string c="";
		if(k==l) for(int i=0;i<k;i++) cout<<"ab";
		else if(k>l)
		{
			int p=D(k,max(h,g));
			int q=D(l,max(h,g));
			for(int i=0;i<max(h,g);i++)
			{
				for(int j=i*p;j<i*p+p&&a[j]!='\0';j++) c.append(1u,a[j]);
				if(v>0) {for(int n=i*q;n<i*q+q&&b[n]!='\0';n++) {v--; c.append(1u,b[n]);}}
				else if(v==0&&i<max(h,g)-1) c.append(1u,'*');
			}	
		}
		else
		{
			int p=D(k,max(g,h));
			int q=D(l,max(g,h));
			for(int i=0;i<max(g,h);i++)
			{
				for(int j=i*q;j<i*q+q&&b[j]!='\0';j++) c.append(1u,b[j]);
				if(u>0) {for(int n=i*p;n<i*p+p&&a[n]!='\0';n++) {u--; c.append(1u,a[n]);}}
				else if(u==0&&i<max(g,h)-1) c.append(1u,'*');
			}
		}
		cout<<c;
		if(t>0) cout<<"\n";
		}
	return 0;
}