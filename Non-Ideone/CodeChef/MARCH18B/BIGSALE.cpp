#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t,n;
	cin >> t;
	while(t--) {
		double sum = 0.0;
		cin >> n;
		while(n--) {
			double a[3];
			for(int i = 0; i < 3; i++) cin >> a[i];
			sum += ((((a[0] + (a[0] * (a[2] / 100))) * (a[2] / 100))) - ((a[2] / 100) * a[0])) * a[1];
		}
		cout.precision(7);
		cout << fixed << sum << "\n";
	}
	return 0;
} 
