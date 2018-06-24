#include <bits/stdc++.h>
using namespace std;
 
bool isPalindrome(char str[])
{
    int l = 0;
    int h = strlen(str) - 1;
 
    while (h > l) {
        if (str[l++] != str[h--]) {
            return 0;
        }
    }
    return 1;
}
 
void printRotatedString(char str[])
{
    int c = 0;
    int n = strlen(str);
    
    char temp[2*n + 1];
    strcpy(temp, str);
    strcat(temp, str);
 
    for (int i = 0; i < n; i++)
    {
        string s2 = "";
        for (int j=0; j != n; j++) s2 += temp[i + j];
        int n = s2.length();
        char str[n+1];
        strcpy(str, s2.c_str());
        c += isPalindrome(str);
    }
    cout << c;
}
 
int main() {
	int t; cin >> t;
	while(t--) {
		string s; cin >> s;
		int n = s.length();
		char str[n+1];
		strcpy(str, s.c_str());
		printRotatedString(str);
		cout << "\n";
	}
	return 0;
} 
