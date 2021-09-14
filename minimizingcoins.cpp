#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
#define ar array 
const ll inf=1e18; 


int main(){
int n,x; 
cin>>n>>x ; 
ll c[1e9]; 
ll dp[1e8]; 
for(int i=0;i<n;++i)
cin>>c[i] ; 
for(int i=1;i<=x;++i) {
dp[i]=1e9 ; 
for(int j=0;j<n;++j) 
if(c[j]<=i)
dp[i]=min(dp[i],dp[i-c[j]]+1);
}
if(dp[x]>=1e9)
cout <<-1; 
else 
cout<<dp[x]; 
}
