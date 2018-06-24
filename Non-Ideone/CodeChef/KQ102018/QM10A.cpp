#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s; cin >> s; int p = 1, v = 5, c = 21;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '*' && i == 0) p *= c;
        else if(s[i] == '*' && (s[i-1] != 'a' && s[i-1] != 'e' && s[i-1] != 'i' && s[i-1] != 'o' && s[i-1] != 'u')) {p *= v; s[i] = 'a';}
        else if(s[i] == '*' && (s[i-1] == 'a' || s[i-1] == 'e' || s[i-1] == 'i' || s[i-1] == 'o' || s[i-1] == 'u')) {p *= c; s[i] = 'b';}
    }
    cout << p;
    return 0;
}
 
