#include<bits/stdc++.h>
using namespace std ; 


int main(){
int n , x; 
cin>>n>>x ; 

int h[n],s[n];
int dp[x+1];
for(int i=0;i<n;++i) 
cin>>h[i];

for(int i=0;i<n;++i)
cin>>s[i];


for(int i=1;i<n;++i)
for(int j=x;j>=h[i];j--)
dp[i]=max(dp[i],dp[j-h[i]]+s[i]);
cout<<dp[x];




}
