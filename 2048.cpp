#include<bits/stdc++.h>
using namespace std;

void prod(int n){
	if(n==0)
	return;
	
	int x = n%10;
	prod(n/10);

	if(x==0)
	cout<<"zero ";
	else if(x==1)
	cout<<"one ";
	else if(x==2)
	cout<<"two ";	
	else if(x==3)
	cout<<"three ";
	else if(x==4)
	cout<<"four ";
	else if(x==5)
	cout<<"five ";
	else if(x==6)
	cout<<"six ";
	else if(x==7)
	cout<<"seven ";
	else if(x==8)
	cout<<"eight ";
	else if(x==9)
	cout<<"nine ";
}

int linear(int *arr,int i,int x,int n){
	if(i==n)
	return -1;
	if(arr[i]==x)
	return i;
	
	linear(arr,i+1,x,n);
}

int binary(int *arr,int low,int high,int key){
	if(low>high)
	return -1;
	
	int mid = (low+high)/2;
	if(arr[mid]==key)
	return mid;
	
	if(arr[mid]<key)
	low=mid+1;
	else if(arr[mid]>key)
	high = mid-1;
	
	return binary(arr,low,high,key);
}

int main(){
	int t;cin>>t;
	
	while(t--){
	int n;cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];}
		int i=0;
		int x;cin>>x;
		int low = 0,high=n-1;
		cout<<binary(arr,low,high,x)<<endl;	
	}
}
