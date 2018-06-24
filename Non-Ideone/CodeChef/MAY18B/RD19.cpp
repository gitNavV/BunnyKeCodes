#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t, n; cin >> t;
	while(t--) {
		cin >> n; int a[n], c = -1;
		for(int i = 0; i < n; i++) cin >> a[i];
		int p = a[0];
		if(n > 1) {
			for(int i = 1; i < n; i++) {
				if(__gcd(p, a[i]) == 1) {c = 0; break;} 
			}
			cout << c << "\n";
		}
		else {
			if(p == 1) cout << "0\n";
			else cout << "-1\n";
		}
	}
	return 0;
} 
