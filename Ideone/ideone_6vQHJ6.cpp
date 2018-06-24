    #include <bits/stdc++.h>
    using namespace std;
     
    int check(int a, int b, int sp) {
    	if(b == a) return sp;
    	else if(b > a) {
    		int x = __builtin_popcount(a);
    		int y = __builtin_popcount(b);
    		for(int i = b - 1; i >= 1; i--) {
    			if(i == a) {
    				return sp + (b - i);
    			}
    			else if(__builtin_popcount(i) == x) {
    				sp++;
    				return check(i+1, b, sp);
    			}
    		}
    		//return -1;
    	}
    	else {
    		int d = __builtin_popcount(a);
    		int e = __builtin_popcount(b);
    		for(int i = b - 1; i >= 1; i--) {
    			if(i == a) {
    				return sp + (b - i);
    			}
    			else if(__builtin_popcount(i) == d) {
    				sp++;
    				return check(i+1, b, sp);
    			}
    		}
    		return -1;
    	}
    }
     
    int main() {
    	int t; cin >> t;
    	while(t--) {
    		int a, b, f, s, sp = 0; cin >> a >> b;
    		f = abs(b - a);
    		if(b == 0 && a != 0) cout << "-1\n";
    		else if (a == 0 && b != 0) cout << f << "\n";
    		else if(a == b) cout << "0\n";
    		else {
    			s = check(a, b, sp);
    			cout << min(f, s) << "\n";
    		}
    	}
    	return 0;
    } 