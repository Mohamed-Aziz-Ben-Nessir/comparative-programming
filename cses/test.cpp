#include<bits/stdc++.h> 
using namespace std ; 

const int mx=1e5;
vector<vector<int>> g;

int main(){

for(int i=0,a,b;i<5;i++){ 
g.resize(6);
cin>>a>>b; 
g[a].push_back(b); 
g[b].push_back(a);
}
}
