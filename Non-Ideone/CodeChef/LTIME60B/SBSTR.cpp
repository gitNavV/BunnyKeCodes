#include <bits/stdc++.h>
using namespace std;
 
void subArray(string arr, int n, int k) {
    int cn = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
        	int cnt[26] = {0}, cx = 0;
        	for(int k = i; k <= j; k++) cnt[(int)arr[k]-97]++;
	set<int> ch;
	for(int j = 0; j < 26; j++) {
		if(cnt[j] > 0) {cx++; ch.insert(cnt[j]);}
	}
	if(cx >= k && ch.size() < 2) cn++;
        }
    }
    cout << cn << "\n";
}
 
int main() {
	int t; cin >> t;
	while(t--) {
		string s; int k;
		cin >> s >> k;
		int n = s.size();
		subArray(s, n, k);
	}
	return 0;
} 
