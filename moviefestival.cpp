#include<bits/stdc++.h>
using namespace std ; 
#define ll long long ; 
const int inf =1e9; 

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

vector<pair<int,int>> v ; 

int n ; 
cin >>n;

int x , y ; 

for(int i=0;i<n;i++){
cin >>x>>y; 
v.push_back(make_pair(y,x));
}

sort(v.begin(),v.end()); 

int l=0,ans=0;

for(auto i : v) {
if(i.second>=l){
l=i.first; 
ans++;
}
}

cout<<ans;
}
