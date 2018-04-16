#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; 
    flag:
    cin >> n;
    if(n != 42) {
        cout << n << "\n";
        goto flag;    }
    return 0;
}
