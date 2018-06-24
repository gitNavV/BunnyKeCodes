#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long int t, n; cin >> t;
	while(t--) {
		cin >> n; long long int a[n];
		long long int c[n] = {0};
		for(long long int i = 0; i < n; i++) cin >> a[i];
		for(long long int i = 0 ; i < n; i++) {
			long long int sum = 0, sumb =0;
			if(i!=n-1) {
			for(long long int j = i+1; j < n; j++) {
				if(sum<=a[i]) {
					c[j]++;
					sum += a[j];
				}
				else break;
			}
			
			}
			if(i!=0) {
			for(long long int j = i-1; j >= 0; j--) {
				if(sumb<=a[i]) {
					c[j]++;
					sumb += a[j];
				}
				else break;
			}
			}
		}
		for(long long int i = 0; i < n; i++) cout << c[i] << " ";
		cout << "\n";
	}
	return 0;
} 
