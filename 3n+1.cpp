#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll a,b;
	while(cin>>a>>b){
		ll maxcount=0,count=1;
		for(ll i=a;i<=b;i++){
			ll j =i;
			count=1;
			while(j!=1){
				if(j&1)
				j = 3*j+1;
				else
				j/=2;
				count++;
			}
			maxcount = max(count,maxcount);
		}
		cout<<a<<" "<<b<<" "<<maxcount<<endl;
	}
}
