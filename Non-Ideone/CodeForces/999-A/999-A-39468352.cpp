#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, c = 0; cin >> n >> k; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    if(k >= *max_element(a, a + n)) cout << n;
    else if(k < *min_element(a, a+n)) cout << 0;
    else {
        for(int i = 0; a[i] <= k; i++) c++;
        for(int i = n - 1; a[i] <= k; i--) c++;
        cout << c;
    }
    return 0;
}