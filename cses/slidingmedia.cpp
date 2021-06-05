#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
#define ar array 
const ll inf=1e18 ; 

int main(){
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
int n , k ; 
cin>>n>>k; 
vector<ll> v;


for(int i=0;i<k-1;i++){
ll b;
cin>>b;
v.push_back(b);
}

for(int i=k-1;i<n;++i){ 
ll a;
cin>>a; 
v.push_back(a);
if(v.size()==k){
vector<ll>v2(v); 
sort(v2.begin(),v2.end()); 
cout<<v2[k%2+k/2-1]<<" ";
v2.erase(v2.begin(),v2.end());
v.erase(v.begin());
}
}
return 0;
}



