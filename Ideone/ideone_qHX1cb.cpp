#include <iostream>
using namespace std;

int main() {
	long long int t,N;
	cin>>t;
	while(t--)
	{
		cin>>N;
		long long int a[N],s=0;
		for(long long int i=0;i<N;i++) { cin>>a[N]; s+=a[N]; }
		if(s%N==0) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}