#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
#define ar array 
const ll inf=1e18 ; 

int main(){
int n,x ;
cin>>n>>x ;  
ll  t[n],s=0,ans=0; 
map<ll,int> mp;
mp[0]++;
for(int i=0;i<n;++i){ 
cin>>t[i]; 
s+=t[i];
ans+=mp[s-x];
mp[s]++;
}
cout<<ans;
}

