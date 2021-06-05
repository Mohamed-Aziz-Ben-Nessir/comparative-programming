#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
#define ar array 
const ll inf=1e18; 

int main(){
	//ios_base::sync_with_stdio(false); 
	//cin.tie(0;)
	
ll n ; 
cin>>n ; 
ll t[n],s=0,ans=0; 
map<ll,int> mp;
mp[0]++;
for(int i=0;i<n;++i) {
int a ; 
cin >>a ; 
s=(s+a%n+n)%n;
ans+=mp[s];
mp[s]++;
}
cout<<ans;
}
