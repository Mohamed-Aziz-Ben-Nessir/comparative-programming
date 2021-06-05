#include<ntis/stdc++.h>
using namespace std ;

const int mxM =5e2; 
const int M=1e9+7;
int main(){
int n ; 
cin>>n; 
int dp[mxM*(mxM+1)/2];
int s=n*(n+1)/2; 
if(s&1){
cout<<0; 
return 0;
}
s/=2; 
dp[0]=1; 
for(int i=1;i<=n;i++) 
for(int j=i*(i+1)/2;j>=i;--j)
dp[j]=(dp[j]+dp[j-i])%M; 

cout<<dp[s]*((M+1)/2)%M; 

}


}
