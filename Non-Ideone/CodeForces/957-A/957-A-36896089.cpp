#include<bits/stdc++.h>

using namespace std;

#define	MIN(a,b,c)  min(min(a,b),c)
#define	MAX(a,b,c)  max(max(a,b),c)
#define ll          long long
#define itr         vector<ll>::iterator
#define pb          push_back
#define mp          make_pair
#define pii         pair<ll,ll>
#define vi          vector<ll>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define mem(a,b)    memset(a,b,sizeof(a))
#define sz          size()
#define hell        1000000007
#define endl        '\n'
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define repr(i,a,b) for(int i=a;i>=b;i--)
#define Vit         std::vector<ll>:: iterator
#define Sit         std::set<ll>:: iterator
#define Mit         std::map<ll,ll>:: iterator
#define lb          lower_bound
#define ub          upper_bound
#define bs          binary_search
#define tr(con, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)

int main() {
    int n, c = 0; cin >> n;
    string s;
    cin >> s;
    if(n == 1) {
        if(s[0] != '?') {
            cout << "No";
            goto flag;
        }
        else {
            cout << "Yes";
            goto flag;
        }
    }
    for(int i = 0; i < n; i++) {
        if(s[i]=='?') {
            if(i > 0 && i < n-1 && (s[i-1] == s[i+1] || s[i-1] == '?' || s[i+1] == '?')) c++;
            else if(i == 0 || i == n-1) c++;
        }
        else if(s[i] == s[i+1] && i < n-1) {
            cout << "No";
            goto flag;
        }
    }
    if(c >= 1) cout << "Yes";
    else cout << "No";
    flag:
    return 0;
}