#include<bits/stdc++.h>
using namespace std;

int minValue(int A[], int B[], int n)
{
    sort(B, B + n, greater<int>());

    int result[n-3] = {0},k=n-3;
    flag:
    for (int i = 0, j = 0; i < n-k ,j < 3; i++ ,j++)
        {result[i] += (A[j] * B[n - k - i - 1]); k++; goto flag;}
        
    int maxr=result[0];
    for (int i=0; i<n-3-1; i++)
    {
    	maxr=max(maxr,result[i]);
    }
    return maxr;
}

int main()
{
	int k;
	cin>>k;
	int A[k],B[k];
	cin>>A[0]>>A[1]>>A[2];
	for(int i=0;i<k;i++) cin>>B[i];
	cout << minValue(A, B, k);
    return 0;
}