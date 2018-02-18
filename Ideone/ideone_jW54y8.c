#include <stdio.h>
#include <math.h>

int main() {
	long long int n,k;
	scanf("%lld%lld",&n,&k);
	long long int p=pow(10,k);
	for(long long int i=p;i!=-1;i+=p)
	{
		if(i%n==0) {printf("%lld",i); i=-1; break;}
	}
	return 0;
}