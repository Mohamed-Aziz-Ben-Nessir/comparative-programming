#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
#define ar array 
const ll inf =1e18; 

int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);

ll n,s=0; 
cin >>n ; 
ll t[n]; 
for(int i=0;i<n;++i) 
cin >>t[i], s+=t[i]; 

sort(t,t+n) ; 


cout<<max(s,2ll*t[n-1]);
}
