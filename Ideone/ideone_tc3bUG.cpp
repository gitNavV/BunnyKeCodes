#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	cin >> t;
	while(t--) {
		cin >> n;
		int a[n], b[n], f=0, b2=0;
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++) cin >> b[i];
		for(int i = 0; i < n; i++) {
			if(b[i]<a[i]) f=1;
		}
		for(int i = 0; i < n; i++) {
			if(b[n-i-1]<a[i]) b2=1;
		}
		if(b2==1 && f==0) cout << "front\n";
		else if(b2==0 && f==1) cout << "back\n";
		else if(b2==1 && f==1) cout << "none\n";
		else cout << "both\n";
	}
	return 0;
}