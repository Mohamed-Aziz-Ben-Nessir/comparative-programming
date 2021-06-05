#include<bits/stdc++.h>
using namespace std ;
 
int main(){
int a,b; 
cin>>a>>b ; 
const int m=1e9;
int dp[m][m];

for(int i=1;i<=a;i++)
for(int j=1;j<=b;++j) {
if(i^j)
dp[i][j]=1e9; 
for(int k=1;k<i;k++) 
dp[i][j]=min(dp[i][j],dp[i][j]+dp[i-k][j]+1);
for(int k=1;k<j;++k)
dp[i][j]=min(dp[i][j],dp[i][k]+dp[i][j-k]+1);
}

cout<<dp[a][b]; 

}
