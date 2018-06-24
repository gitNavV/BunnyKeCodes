#include <bits/stdc++.h>
using namespace std;
 
int b2d(string s) {
	int n = 0, size = s.size() - 1, count = 0, i = 0;
	while ( s[i] != '\0' ) {
		if ( s[i] == '1' ) n = n + pow(2, size - count );
		count++; i++;
	}
	return n;
}
 
string d2b(int n) {
	string s="";
	int c, k;
	for (c = 31; c >= 0; c--) {
		k = n >> c;
		if (k & 1) s += "1";
		else s += "0";
	}
	return s;
}
 
int main() {
	int n, t, l, r; cin >> n >> t;
	int a[n], n0[32] = {0}, n1[32] = {0}, sum0[n][32] = {0, 0, 0, 0}, sum1[n][32] = {0, 0, 0, 0};
	for(int i = 0; i < n; i++) { 
		cin >> a[i];
		string s = d2b(a[i]);
		for(int j = 0; j < 32; j++) {
			if(s[j]=='0') n0[j]++;
			else n1[j]++;
			sum0[i][j] = n0[j];
			sum1[i][j] = n1[j];
		}
	}
	while(t--) {
		string s ="";
		cin >> l >> r;
		if(l>1) {
			for(int j = 0; j < 32; j++) {
				if((sum0[r-1][j] - sum0[l-2][j])>(sum1[r-1][j] - sum1[l-2][j])) s += "1";
				else s += "0";
			}
		}
		else {
			for(int j = 0; j < 32; j++) {
				if(sum0[r-1][j]>sum1[r-1][j]) s += "1";
				else s += "0";
			}
		}
		cout << setprecision(10) << pow(2,31) + b2d(s) << "\n";
	}
	return 0;
} 
