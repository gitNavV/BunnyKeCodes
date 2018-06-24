#include <iostream>
using namespace std;

long long int nChoosek(long long int n,long long int k)
{
    if (k>n) return 0;
    if (k*2>n) k=n-k;
    if (k==0) return 1;

    long long int result = n;
    for(int i=2;i<=k;++i) {
        result*=(n-i+1);
        result/= i;
    }
    return result;
}

int main(void) {
	long long int t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		cout<<nChoosek(a-1,b-1);
		if(t>0) cout<<"\n";
	}
	return 0;
}