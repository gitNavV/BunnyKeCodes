#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d; cin >> a >> b >> c >> d; a -= c; b -= c;
    int val = d - a - b - c;
    if(a < 0 || b < 0) val = 0;
    if (val <= 0) cout << -1;
    else cout << val;
    return 0;
}