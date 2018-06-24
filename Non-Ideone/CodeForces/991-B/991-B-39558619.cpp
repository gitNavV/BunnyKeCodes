#include <bits/stdc++.h>
using namespace std;

float avga(vector<int> arr, int a) {
    float s;
    s = accumulate(arr.begin(), arr.end(), 0);
    s = (float)((float)s / (float)a);
    return s;
}

int main()
{
    int a; cin >> a; vector<int> arr(a); float s = 0; int c = 0;
    for(int i = 0; i < a; i++) { cin  >> arr[i]; s += arr[i]; }
    sort(arr.begin(), arr.end());
    s = (float)((float)s / (float)a);
    if(s >= 4.5) cout << 0;
    else for(int i = 0; arr[i] != 5; i++) {
        arr[i] = 5; c++;
        if(avga(arr, a) >= 4.5) {cout << c; break;}
    }
    return 0;
}