#include<bits/stdc++.h>
#define ll long long 
#define ar array
using namespace std ;
const ll inf=1e18; 

int n , k ; 
vector<ll> v ; 

ll ans(){
int mx,mn; 
mx=*max_element(v.begin(),v.end());
mn=*min_element(v.begin(),v.end());
ll s=0, rt=inf;
for(int i=mn;i<=mx;++i){
for(auto j=v.begin();j!=v.end();++j)
s+=abs(*j-i);
rt=min(rt,s);
s=0;
}
return rt;
}

int main(){
//ios_base::sync_with_stdio(false);
//cin.tie(NULL);
cin>>n>>k; 
int a;
for(int i=0;i<k-1;++i){
cin>>a; 
v.push_back(a);
}
for(int i=k-1;i<n;i++) {
cin>>a; 
v.push_back(a);
cout<<ans()<<" ";
v.erase(v.begin());
}

}



