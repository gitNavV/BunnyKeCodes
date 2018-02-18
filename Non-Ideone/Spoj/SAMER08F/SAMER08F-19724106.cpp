#include <iostream>
using namespace std;

int main() {
	int t;
	while(1){
		cin>>t;
		if(t!=0) cout<<(t*(t+1)*((2*t)+1))/6<<"\n";
		else break;
	}
	return 0;
}