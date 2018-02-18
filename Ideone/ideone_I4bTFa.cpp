#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t,a,b,c,p;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		p=a%10;
		c=b%4;
		if(b==0) cout<<"1\n";
		else if(p==1||p==0||p==5||p==6) cout<<p<<"\n";
		
else if(c==1)

    printf("%d\n",p);

else if(c==2)

    printf("%d\n",((p*p)%10));

else if(c==3)

    printf("%d\n",((p*p*p)%10));

else if(c==0)

    printf("%d\n",((p*p*p*p)%10));
	}
	return 0;
}