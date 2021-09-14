#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
#define ar array 
const ll inf=1e18 ; 


int main(){
int n; 
cin>>n ; 
int dp[n+1]={1};
int M=1e9+7;
for(int i=1;i<=n;++i)
for(int j=1;j<=min(6,i);++j)
dp[i]=(dp[i]+dp[i-j])%M; 

cout<<dp[n]; 

}
