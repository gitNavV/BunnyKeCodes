#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
string s;int t=1;cin>>s;

while(s!="*"){
	cout<<"Case "<<t<<": ";
	if(s=="Hajj")
	cout<<" Hajj-e-Akbar\n";
	else
	cout<<" Hajj-e-Asghar\n";
	t+=1;
	cin>>s;
}

}
