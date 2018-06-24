#include <bits/stdc++.h>
using namespace std;
 
int bsearch(int l, int h2, int a[], int h, int n) {
	if(l==h2) return l;
	else {
	int mid = (l + h2) / 2;
	int sum = 0;
	for(int i = 0; i < n; i++) {
		sum += ceil((double)a[i] / mid);
	}
	if(sum>h) return bsearch(mid+1, h2, a, h, n);
	else if(sum<=h) return bsearch(l, mid, a, h ,n);
	}
}
 
int main() {
	int t, n, h; cin >> t;
	while(t--) {
		cin >> n >> h;
		int a[n], sum = 0;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			sum += a[i];
		}
		sum /= h;
		int max = *max_element(a, a+n);
		int ans = bsearch(sum, max, a, h, n);
		cout << ans << "\n";
	}
	return 0;
} 
