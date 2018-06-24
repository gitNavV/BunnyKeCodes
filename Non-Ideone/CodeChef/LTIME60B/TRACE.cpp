#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n; int a[n][n]; int tr[(2 * n) - 1][2];
		for(int i = 0; i < (2 * n) - 1; i++) {
			for(int j = 0; j < 2; j++) tr[i][j] = 0;
		}
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				cin >> a[i][j];
				if(i <= j) tr[j - i][0] += a[i][j];
				else tr[i - j][1] += a[i][j];
			}
		}
		int maxi = INT_MIN;
		for(int i = 0; i < (2 * n) - 1; i++) {
			for(int j = 0; j < 2; j++) maxi = max(maxi, tr[i][j]);
		}
		cout << maxi << "\n";
	}
	return 0;
} 
