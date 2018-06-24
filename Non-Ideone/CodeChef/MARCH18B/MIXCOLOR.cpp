#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t, n; cin >> t;
	while(t--) {
		cin >> n;
		int a[n];
		set<int> b;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			b.insert(a[i]);
		}
		cout << n - b.size() << "\n";
	}
	return 0;
} 
