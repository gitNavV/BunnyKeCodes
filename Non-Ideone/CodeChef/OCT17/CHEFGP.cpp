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
		for(int m=0;m<s.size();m++)
		{
			if(s[m]=='a') a.append(1u,s[m]);
			else b.append(1u,s[m]);
		}
		int k=a.size();
		int l=b.size();
        int i=0,j=0;
        while(1)
        {
            if(k>=l&&i<x||j==y)
            {
                j=0;
                if(k>0) cout<<"a";
                i++;
                k--;
                if(k==-1) {cout<<"*"; k++;}
            }
            else if(k<l&&j<y||i==x)
            {
                i=0;
                if(l>0) cout<<"b";
                j++;
                l--;
                if(l==-1) {cout<<"*"; l++;}
            }
            if(k==0&&l==0) break;
        }
		if(t>0) cout<<"\n";
		}
	return 0;
} 
