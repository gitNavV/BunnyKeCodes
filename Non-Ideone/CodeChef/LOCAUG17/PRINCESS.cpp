#include <bits/stdc++.h>
using namespace std;
 
int subString(string str,int n) 
{
	string p;
    for (int len=1;len<=n;len++) 
    {    
        for (int i=0;i<=n-len;i++) 
        {
            int j=i+len-1;
            p="";
            for (int k=i;k<=j;k++) 
                {
                	p+=str[k];
                }
            if(p.size()>1)
           {
           	if (p==string(p.rbegin(),p.rend())) {cout<<"YES\n"; return 0;}
           }
        }
    }
}
 
int main() {
	int t,m;
	cin>>t;
	string s;
	while(t--)
	{
		m=1;
		cin>>s;
		m=subString(s,s.size());
		if(m!=0) cout<<"NO\n";
	}
	return 0;
} 
