#include <bits/stdc++.h>
using namespace std;
 
int howmany(int a, int b) {
	int tmp = b;
	b = max(a, b);
	a = min(a, tmp);
	if(a == 0) return b;
	else if(b == 0) return 0;
	else if(b % a == 0) return 2*a;
	else return 2*__gcd(a,b);
}
 
int main() {
	int t, a, b; cin >> t;
	while(t--) {
		cin >> a >> b;
		cout << howmany(a, b) << "\n";
	}
	return 0;
} 
