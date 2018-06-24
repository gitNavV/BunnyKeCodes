#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n=0,k=0,p=0;
		cin>>n>>k;
		vector<int> a;
		for(int i=0;i<n;i++) {cin>>p; a.push_back(p);}
		sort(a.begin(),a.end());
		cout<<a[1]<<"\n";
	}
	
	return 0;
}