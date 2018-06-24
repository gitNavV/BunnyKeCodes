#include <iostream>
using namespace std;
 
int howMany[10003];
 
int main()
{
    int j = 1, k = 2;
    for(int i = 1; i < 10002; i++) {
        if(i == 1 || i == 2 || i == 3) howMany[i] = 0;
        else {howMany[i] = howMany[i + 1] = j; j += k; k++; i++;}
    }
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        cout << howMany[n] << "\n";
    }
    return 0;
} 
