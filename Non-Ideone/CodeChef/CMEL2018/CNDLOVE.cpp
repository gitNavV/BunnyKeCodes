#include <iostream>
using namespace std;
 
int main() {
	int t, n; cin >> t;
	while(t--) {
		cin >> n; int a[n], sum = 0;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			sum += a[i];
		}
		if(sum % 2 != 0) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
} 
