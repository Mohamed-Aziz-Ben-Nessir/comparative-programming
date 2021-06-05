#include<bits/stdc++.h>
using namespace std ;


int main(){
const int m=1e9+7;
int n; 
cin>>n; 
int dp[m][m]; 
string s[n]; 

for(int i=0;i<n;++i) 
cin>>s[i]; 

dp[0][0]=1; 

for(int i=0;i<n;++i)
for(int j=0;j<n;++j){
if(i)
dp[i][j]+=dp[i-1][j];
if(j)
dp[i][j]+=dp[i][j-1]; 
dp[i][j]%=m;
if(s[i][j]=='*')
dp[i][j]=0;
}
cout<<dp[n-1][n-1];
}
