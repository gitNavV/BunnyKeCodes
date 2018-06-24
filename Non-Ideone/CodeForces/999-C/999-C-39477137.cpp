#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, f[26] = {0}, k2[26] = {0}; string s; cin >> n >> k >> s;
    
    for(int i = 0; i < n; i++) f[(int)s[i] - 97]++;
    
    for(int i = 0; i < 26; i++) {
        if(f[i] > 0) {
            int tmp = k;
            k -= min(f[i], k) ; k2[i] += min(f[i], tmp);
        }
    }
    
    for(int i = 0; i < n; i++) {
        if(k2[(int)s[i] - 97] == 0) cout << s[i];
        else k2[(int)s[i] - 97]--;
    }
    
    return 0;
}