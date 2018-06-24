#include <bits/stdc++.h>
using namespace std;
 
int main() {
	vector<int> A;
	A.push_back(1);
	int j = 2;
	for(int i = 1; i < 1000000001; ) {
		i+=j;
		j++;
		A.push_back(i);
	}
	int t; cin >> t;
	while(t--) {
		int n;
		cin >> n;
		if(n == 1) cout << "1\n";
		else {
		vector<int>::iterator low2;
		low2 = lower_bound(A.begin(), A.end(), n);
		int low = low2 - A.begin();
		int tmp = (A[low] + A[low-1]) / 2;
		if(n <= tmp) cout << (low-1) + (n-A[low-1]) + 1 << "\n";
		else cout << low + (A[low]-n) + 1 << "\n";
		}
	}
	return 0;
} 
