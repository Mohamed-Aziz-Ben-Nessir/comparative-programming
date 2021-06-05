#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
#define ar array  
const ll inf=1e18 ; 

int main(){
int n ; 
cin >>n;
ar<int,2> t[n]; 
for(int i=0;i<n;++i)
cin>>t[i][0]>>t[i][1]; 
sort(t,t+n); 
ll c=0,ans=0; 
for(int i=0;i<n;++i) {
c+=t[i][0]; 
ans+=t[i][1]-c;
}
cout <<ans ; 
}
