#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> s(2); cin >> s[0] >> s[1]; int c = 0, i = 0;
    
    if(s[0].size() < 2) { cout << 0; return 0; }
    
    for(int j = 0; j < s[0].size() - 1; j++) {
        //cout << s[i][j] << s[i][j + 1] << "\n" << s[i + 1][j] << s[i + 1][j + 1] << "\n\n";
        if(s[i][j] == '0' && s[i + 1][j] == '0' && s[i + 1][j + 1] == '0') { s[i][j] = s[i + 1][j] = s[i + 1][j + 1] = 'X'; c++; }
        else if(s[i][j] == '0' && s[i][j + 1] == '0' && s[i + 1][j + 1] == '0') { s[i][j] = s[i][j + 1] = s[i + 1][j + 1] = 'X'; c++; }
        else if(s[i][j] == '0' && s[i][j + 1] == '0' && s[i + 1][j] == '0') { s[i][j] = s[i][j + 1] = s[i + 1][j] = 'X'; c++; }
        else if(s[i + 1][j + 1] == '0' && s[i][j + 1] == '0' && s[i + 1][j] == '0') { s[i + 1][j + 1] = s[i][j + 1] = s[i + 1][j] = 'X'; c++; }
    }
    
    cout << c;
    return 0;
}