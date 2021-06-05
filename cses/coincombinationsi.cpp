#include<bits/stdc++.h>
using namespace std ; 

const int m=1e9+7;
int main(){
int n,x;
cin>>n>>x; 
int dp[x+1],c[n];
for(int i=0;i<n;i++)
cin>>c[i];
dp[0]=1;
for(int i=0;i<=x;++i)
for(int j=0;j<n;++j)
if(c[j]<=i)
dp[i]=(dp[i]+dp[i-c[j]]);
cout<<dp[x]%m;
}
