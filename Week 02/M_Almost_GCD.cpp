#include <bits/stdc++.h>
 
using namespace std;
 
#define endl "\n"
 
 
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
   
   int n;
   cin>>n;
   int a[n],i,j,cnt=0,mx=0,num=0;
   for(i=0;i<n;++i)
      cin>>a[i];
      
   for(i=2;i<=1000;++i)
   {
       cnt=0;
       for(j=0;j<n;++j)
       {
           if(a[j]%i==0)
              cnt++;
       }
       
       if(mx<cnt)
       {
           mx=cnt;
           num=i;
       }
       if(mx==n)
           break;
   }
   
   cout<<num;
    
   
     return 0;
}