#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
const ll inf =1e18; 

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n ; 
cin >>n ; 
ll mx=-inf , mn=inf;
vector<ll> v[n];
for(int i=0;i<n;++i){
int a  ; 
cin >>a; 
v.push_back(a);
}

mn=min_element(v.begin(),v.end());
mx=max_element(v.begin(),v.end());

ll  ans=inf,s=0; 

while(mx>=mn){
for(int i=0;i<n;++i){
s+=abs(mx-v[i]);
}
ans=min(ans,s);
s=0;
mx--;
}
cout<<ans;
}
