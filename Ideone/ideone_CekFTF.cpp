#include <bits/stdc++.h>
using namespace std;

int subString(string str, int n) 
{
	string st;
	int c,count=0;
    for (int len=1;len<=n;len++) 
    {    
        for (int i=0;i<=n-len;i++) 
        {
            int j=i+len-1;   
            st="";
            for (int k=i;k<=j;k++) 
                st+=str[k];
            c=0;
            for(int i=0,j=st.size()-1;i<st.size()/2,j>=st.size()/2;i++,j--)
            {
            	if(st[i]==st[j]) c++;
            	else {c=0; break;}
            }
            if(c!=0) count++;
        }
    }
    return count;
}

int main() 
{
	int t,c;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		if(s.size()<2) cout<<"0\n";
		else 
		{
			c=subString(s,s.size());
			cout<<c<<"\n";
		}
		
	}
	return 0;
}
