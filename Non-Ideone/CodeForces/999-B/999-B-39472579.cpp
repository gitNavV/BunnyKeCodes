#include <bits/stdc++.h>
using namespace std;

string printDivisors(int n, string s) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && i > 1) reverse(s.begin(), s.begin() + i);
    }
    
    return s;
}

int main()
{
    int n; string s; cin >> n >> s;
    cout << printDivisors(n, s);
    return 0;
}