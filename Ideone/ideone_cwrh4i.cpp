#include<bits/stdc++.h>
using namespace std;
 
int main() 
{
    string s;
    int t;
    cin>>t;
    while(t--)
    {
    cin>>s;
    int count[26]={0},c=0,d=0;
    for(int i=0;i<s.size();i++)
    {
    	count[(int)(s[i]-'a')]++;
    }
    for(int i=0;i<26;i++)
    {
    	if(count[i]>1) {c++;}
    }
    if(c<=1) cout<<"no";
    else cout<<"yes";
    if(t>0) cout<<"\n";
    }
    return 0;
} 