#include <bits/stdc++.h>
using namespace std;

void add(int arr[], int N, int lo, int hi, int val)
{
    arr[lo] += val%1000000007;
    if (hi != N - 1)
       arr[hi + 1] -= val%1000000007;
}

void updateArray(int arr[], int N)
{
    for (int i = 1; i <= N; i++)
        arr[i] += arr[i - 1]%1000000007;
}
 
void printArr(int arr[], int N)
{
    updateArray(arr, N);
    for (int i = 1; i <= N; i++)
        cout << arr[i]%1000000007 << " ";
    cout << endl;
}

struct boom {int x,y,z;};

void repeat(int arr[],int a,struct boom w[],int d,int e)
{
	for(int j=d;j<=e;j++)
	{
	if(w[j].x==1){add(arr, a, w[j].y, w[j].z, 1);}
	else if(w[j].x==2) {repeat(arr,a,w,w[j].y,w[j].z);}
	} 
	return;
}



int main()
{
    int a,b,t;
    cin>>t;
    while(t--)
    {
    cin>>a>>b;
    int arr[a+1];
    memset(arr,0,sizeof arr);
    int c,d,e,i=0;
    while(i<b)
    {
    	struct boom w[b];
    	cin>>c>>d>>e;
    	w[i+1].x=c;
    	w[i+1].y=d;
    	w[i+1].z=e;
    	if(c==1)
    	{
    		add(arr, a, d, e, 1);
    	}
    	if(c==2)
    	{
    		repeat(arr,a,w,d,e);
    	}
    	i++;
    }
    printArr(arr, a);
    }
    return 0;
}