#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int a, b, x, y, z; cin >> a >> b;
	vector<long long> c(a);
	for(int i = 0; i < a; i++) cin >> c[i];
	while(b--) {
		cin >> x >> y >> z;
		if(x==1) c[y-1]=z;
		else if(x==2) {
			if(a>=3 && z-y>=2) {
				vector<long long>::iterator it = c.begin() + y - 1;
				vector<long long>::iterator it2 = it - y + 1 + z;
				vector<long long> temp(it, it2);
				sort(temp.begin(), temp.end());
				long long tmp = -3;
				for(int i = 0; i < temp.size()-2; i++) {
					if(temp[temp.size() - i - 1] < (temp[temp.size() - i - 2] + temp[temp.size() - i - 3])) {
						tmp = i; break;
					}
				}
				
				if(tmp!=-3) cout << temp[temp.size()-tmp-1] + temp[temp.size()-tmp-2] + temp[temp.size()-tmp-3] << "\n";
				else cout << "0\n";
			}
			else cout << "0\n";
		}
	}
	return 0;
} 
