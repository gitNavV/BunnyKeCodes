#include <bits/stdc++.h>
using namespace std;
 
void whoWins(vector<int> &a, vector<int> &b) {
	int maxa = distance(a.begin(), max_element(a.begin(), a.end()));
	int minb = distance(b.begin(), min_element(b.begin(), b.end()));
	//cout << maxa << " " << minb << "\n";
	int tmp = a[maxa];
	a[maxa] = b[minb];
	b[minb] = tmp;
}
 
int main() {
	int t; cin >> t;
	while(t--) {
		int n = 0, p = 0, k = 0;
		cin >> n >> p; vector<int> a, b;
		for(int i = 0; i < n; i++) {
			cin >> k;
			if(i % 2 == 0) a.push_back(k);
			else b.push_back(k);
		}
		if (n == 1) {cout << "NO\n";}
		else {
			int isum = 0, isum2 = 0;
			int x = accumulate(a.begin(), a.end(), isum);
			int y = accumulate(b.begin(), b.end(), isum2);
			if(x < y) cout << "YES\n";
			else { while(p--) {
				whoWins(a, b);
				int isum = 0, isum2 = 0;
				int x = accumulate(a.begin(), a.end(), isum);
				int y = accumulate(b.begin(), b.end(), isum2);
				//cout << x << " " << y << "\n";
				if(x < y) {cout << "YES\n"; break;}
			}
			isum = 0, isum2 = 0;
			x = accumulate(a.begin(), a.end(), isum);
			y = accumulate(b.begin(), b.end(), isum2);
			if(x >= y) cout << "NO\n";}
		}
	}
	return 0;
} 
