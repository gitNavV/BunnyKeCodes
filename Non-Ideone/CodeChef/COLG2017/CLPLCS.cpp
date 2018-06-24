#include<iostream>
#include<cstring>
 
using namespace std;
 
int main()
{
 int t,count=1,max=1;
 cin>>t;
 char ar[t][15],temp[t][15];
 for(int x=0;x<t;x++)
  {
   cin>>ar[x];
   strcpy(temp[x],ar[x]);
  }
  for(int k=0;k<t;k++)
  {
   for(int i=k;i<t;)
   {
    temp[i][0]='#';
    for(int j=0;j<t;j++)
    {
     if(temp[i][(strlen(ar[i]))-1]==temp[j][0])
      {
       count++;
       i=j;
       break;
      }
     if(j==(t-1)) {i=t;}
    }
   }
   if(count>max) max=count;
   count=1;
   for(int l=0;l<t;l++)
    {
     strcpy(temp[l],ar[l]);
    }
  }
 cout<<max;
 return 0;
} 
