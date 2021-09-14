#include<bits/stdc++.h>
using namespace std ; 
#define ll long long  
const ll inf =1e18; 
 
int main(){
//ios_base::sync_with_stdio(false);
//cin.tie(NULL);
 
vector<pair<int,int>> v ;  
int n, k; 
cin>>n>>k;
 
int x , y ; 
 
for(int i=0;i<n;i++){
cin >>x>>y; 
v.push_back(make_pair(y,x));
}
 
sort(v.begin(),v.end()); 
 
int l=0,ans=0;

while(k--){
int c=0;
for(auto i : v) {
c++;
if(i.second>=l){
l=i.first; 
ans++;
}
v.erase(v.begin()+c);
}
cout<<ans;
}
}
