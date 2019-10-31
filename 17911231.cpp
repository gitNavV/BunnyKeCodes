#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
int i,j,k,t,l,m,n,z,count;
    cin>>t;
    vector<int> v;
    for(z=0;z<t;z++){
        v.clear();
        cin>>k;
       // cout<<"k "<<k<<endl;
        j=0;
        for(i=0;i<1000000009;i+=j){
           j++;
            v.push_back(i+j);
        }
        vector<int>::iterator low,up;
  low=lower_bound (v.begin(), v.end(),k );
        count=low- v.begin();
        
        if(abs(v[low- v.begin()]-k)<(abs(v[low- v.begin()-1]-k))){
            if(v[low-v.begin()]>k){
      while(v[low- v.begin()]!=k){
          v[low- v.begin()]--;
          count++;
      }
            }
        }
        else{
            if(v[low-v.begin()-1]<k){
            while(v[low- v.begin()-1]!=k){
                v[low- v.begin()-1]++;
                count++;
            }
        }
            count--;
        }
       
        cout<<count+1<<endl;
    }
  return 0;
}
