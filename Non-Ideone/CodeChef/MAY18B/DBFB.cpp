#include<bits/stdc++.h>
using namespace std;
 
const long long int hell = 1000000007;
 
void multi(long long int Fibo[2][2],long long int Map[2][2])
{
	
	long long int a =  ((Fibo[0][0] % hell * Map[0][0] % hell) % hell + (Fibo[0][1] % hell * Map[1][0] % hell)) % hell;
	long long int b =  ((Fibo[0][0] % hell * Map[0][1] % hell) % hell + (Fibo[0][1] % hell * Map[1][1] % hell)) % hell;
	long long int c =  ((Fibo[1][0] % hell * Map[0][0] % hell) % hell + (Fibo[1][1] % hell * Map[1][0] % hell)) % hell;
	long long int d =  ((Fibo[1][0] % hell * Map[0][1] % hell) % hell + (Fibo[1][1] % hell * Map[1][1] % hell)) % hell;
	
	Fibo[0][0] = a;
	Fibo[0][1] = b;
	Fibo[1][0] = c;
	Fibo[1][1] = d;
	
}
 
void pwr(long long int Fibo[2][2] , long long int n) {
	
	if( n == 0 || n == 1) return ;
	
	long long int Map[2][2];
	Map[0][0] = 1;
	Map[0][1] = 1;
	Map[1][0] = 1;
	Map[1][1] = 0;
	
	pwr(Fibo, n / 2);
	
	multi(Fibo, Fibo);
	
	if (n%2 != 0) multi(Fibo, Map);
	
}
 
long long int fibbo(long long int n) {
	
	long long int Fibo[2][2];
	Fibo[0][0] = 1;
	Fibo[0][1] = 1;
	Fibo[1][0] = 1;
	Fibo[1][1] = 0;
	
	if(n == 0) return 0;
	if(n == -1) return 1;
	
	pwr(Fibo, n-1);
	
	return Fibo[0][0];
	
}
 
int main()
{
	long long int t, m, n; cin >> t;
	
	while(t--) {
		
		cin >> m >> n; long long int a[m], b[m]; long long int suma = 0,sumb = 0;
		
		for(long long int i = 0; i < m; i++) {
			cin >> a[i];
			suma = (suma % hell + a[i] % hell) % hell;
		}
		
		for(long long int j = 0; j < m; j++) {
			cin >> b[j];
			sumb = (sumb % hell + b[j] % hell) % hell;
		}
		
		cout << ((((fibbo(n-2) % hell * suma % hell) % hell + (fibbo(n-1) % hell * sumb % hell) % hell) % hell) * m % hell) % hell << "\n";
	}
	return 0;
} 
