#include <bits/stdc++.h>
using namespace std;

bool all_chars_same(string testStr) {
    return testStr.find_first_not_of(testStr[0]) == string::npos;
}

void subString(string s, int n) 
{
    for (int i = 0; i < n; i++) {
        for (int len = 1; len <= n - i; len++){
            cout << s.substr(i, len) << endl;}}
}

int main() 
{
	int t,c;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		if(s.size()<2) cout<<"0\n";
		else 
		{
			subString(s,s.size());
		}
		
	}
	return 0;
}
