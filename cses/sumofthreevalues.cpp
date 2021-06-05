#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
#define ar array 

int main(){
int n,x;
cin>>n>>x; 
vector<pair<int,int>> v ; 

for(int i=0;i<n;++i) {
int a ; 
cin >>a ; 
if(a<=x)
v.push_back(make_pair(x,i+1);
}
sort(v.begin(),v.end());

for(int i=0;i<v.size();++i){ 
int x2=x-v[i].first; 
for(int j=i+1,;j<v.size();++j){
auto it = upper_bound(v.begin(),v.end(),x2-v[j].first); 
if(it != v.end()){
cout<<v[i].second<<" "<<v[j].second<<*it.second;
return 0;
}
}
}
}
