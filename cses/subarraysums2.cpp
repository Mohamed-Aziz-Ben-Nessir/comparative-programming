#include<bits/stdc++.h>
using namespace std ; 
#define ll long long  
#define ar arry 
const ll inf=1e18 ; 

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
ll n,x ;
cin>>n>>x; 
ll s=0,ans=0 ; 
map<ll,int> mp; 
mp[0]++;
for(int i=0;i<n;++i){ 
ll a ; 
cin >>a; 
s+=a; 
ans+=mp[s-x];
mp[s]++;
}
cout<<ans;
}
