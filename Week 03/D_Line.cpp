#include<bits/stdc++.h>
using namespace std;

long long a[200200];
char c[200200];

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,ans=0;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>c[i];
			if(c[i]=='L')
			{
				a[i]=i-1;
			}
			else if(c[i]=='R')
			{
				a[i]=n-i;
			}
			ans=ans+a[i];
		}
		sort(a+1,a+1+n);
		for(int i=1;i<=n;i++)
		{
			if(a[i]>=n/2) cout<<ans<<" ";
			else 
			{
				ans=ans-a[i]+n-a[i]-1;
				cout<<ans<<" ";
			}
			
		}
		cout<<endl;
	}
} 
 		 	   		 				 	   							   	