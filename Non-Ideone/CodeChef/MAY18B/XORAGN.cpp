#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t, n; cin >> t;
	while(t--) {
		cin >> n; int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			if(i > 0) a[i] = a[i] ^ a[i - 1];
		}
		cout << a[n-1] * 2 << "\n";
	}
	return 0;
} 
