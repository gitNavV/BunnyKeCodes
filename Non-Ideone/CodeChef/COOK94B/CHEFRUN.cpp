#include <iostream>
using namespace std;
 
int main() {
	int t; cin >> t;
	while(t--) {
		int a, b, c, d, e;
		cin >> a >> b >> c >> d >> e;
		if((float)(c - a) / (float)d > (float)(b - c)/(float)e) cout << "Kefa\n";
		else if((float)(c - a) / (float)d < (float)(b - c)/(float)e) cout << "Chef\n";
		else cout << "Draw\n";
	}
	return 0;
} 
