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
		string c="";
		if(l<h)
		{
			for(int i=0;i<h;i++)
			{
				for(int j=i*x;j<i*x+x&&a[j]!='\0';j++) c.append(1u,a[j]);
				if(g>0) {for(int n=i*y;n<i*y+y&&b[n]!='\0';n++) {g--; c.append(1u,b[n]);}}
				else if(g==0&&i<(k/x+k%x-1)) c.append(1u,'*');
			}	
		}
		else if(k>h)
		cout<<c;
		if(t>0) cout<<"\n";
		}
	return 0;
}