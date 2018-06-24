#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, m;
	cin >> n >> k >> m;
	unordered_map<string, int> m1;
	string s;
	for(int i = 0; i < n; i++) {
	    cin >> s;
	    m1[s] = i+1;
	}
	long long c[n + 1] = {}, m2[n + 1] = {};
	for(int i = 0; i < n; i++) cin >> c[i+1];
	for(int i = 0; i < k; i++) {
		int n1;
		long long mn=1e9+7;
		cin >> n1;
		int t[n1] = {};
		for(int i = 0; i < n1; i++) {
		    cin >> t[i];
		    mn = min(mn, c[t[i]]);
		}
		for(int i = 0; i < n1; i++) m2[t[i]]=mn;
	}
	long long ans = 0;
	for(int i = 0; i < m; i++) {
	    cin >> s;
	    ans += m2[m1[s]];
	}
	cout << ans;
}