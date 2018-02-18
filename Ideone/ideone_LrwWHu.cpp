#include <bits/stdc++.h>
using namespace std;

void fastscan(int &number)
{
	bool negative = false;
	register int c;
	number = 0;
	c = getchar();
	if (c=='-')
	{
		negative = true;
		c = getchar();
	}
	for (; (c>47 && c<58); c=getchar()) number = number *10 + c - 48;
	if (negative) number *= -1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,s[1000000];
	fastscan(t);
	for(int j=1;j<1000000;j++)
	{
		s[j]=0;
		for(int i=1;i<=j;i++)
		{
			s[j]+=(n*i)/__gcd(n,i);
		}
	}
	while(t--)
	{
		fastscan(n);
		cout<<s[n]<<"\n";
	}
	return 0;
}