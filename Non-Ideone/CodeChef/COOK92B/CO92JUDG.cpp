#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t,n; cin >> t;
	while(t--) {
		int s = 0, s1 = 0;
		cin >> n; int a[n],b[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++) cin >> b[i];
		sort(a, a+n);
		sort(b, b+n);
		for(int i = 0; i < n-1; i++) s += a[i];
		for(int i = 0; i < n-1; i++) s1 += b[i];
		if(s<s1) cout << "Alice\n";
		else if(s>s1) cout << "Bob\n";
		else cout << "Draw\n";
	}
	return 0;
} 
