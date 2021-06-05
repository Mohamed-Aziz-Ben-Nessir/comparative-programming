#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
const ll inf =1e18; 

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  a,n ; 
cin>>n ;
vector<int> v ; 
for(int i=0;i<n;++i) { 
cin >>a ;
int x = upper_bound(v.begin(),v.end(),a)-v.begin();
if(x<v.size())
v[x]=a;
else 
v.push_back(a);
}

cout<<v.size();
}
