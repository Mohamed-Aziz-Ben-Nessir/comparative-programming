#include<bits/stdc++.h>
using namespace std ; 
#define ll long long ;
int main() {

int n ; 
cin >>n ; 

int t[n];
long long s=0 , ans=0; 

for(int i=0;i<n;i++) 
cin>>t[i],s+=t[i];

for(int i=0;i<1<<n;++i){
long long  cs=0; 
for(int j=0;j<n;++j)
if(i>>j&1)
cs+=t[i];
if(cs<=s/2) 
ans=max(ans,cs) ; 

}

cout <<s-2*ans; 



}
