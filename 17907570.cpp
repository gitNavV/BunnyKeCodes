#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
long long int t,i,j,k,l,m,x,n,max1=-1,max2=-1,sum1=0,sum2=0;
    cin>>t;
    for(long long int z=0;z<t;z++){
        cin>>n;
        sum1=0,max1=-1;
        for(i=0;i<n;i++){
        cin>>x;
            sum1=sum1+x;
            if(x>max1){
                max1=x;
            }
        }
        sum1=sum1-max1;sum2=0,max2=-1;
         for(i=0;i<n;i++){
        cin>>x;
            sum2=sum2+x;
            if(x>max2){
                max2=x;
            }
        }
        sum2=sum2-max2;
        if(sum1>sum2){
            cout<<"Bob"<<endl;
        }
        if(sum1<sum2){
            cout<<"Alice"<<endl;
        }
        if(sum1==sum2){
            cout<<"Draw"<<endl;
        }
    }
  return 0;
}
