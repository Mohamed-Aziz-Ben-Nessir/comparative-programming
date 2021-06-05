#include<bits/stdc++.h>
using namespace std ;

int n,m ; 
vector<vector<int>> adj ; 
vector<bool> vis ; 
vector<int> par;
bool vis_all(){

for(int i=0;i<n;++){
if(!vis[i])
if(dfs(i,-1))return true ;
}
return false ;

}

void dfs(int i){
vis[i]=true; 
par[i]=false;

for(int j : adj[i]){
if(i==j)continue ; 
if(vis[i])
dfs(i,);
}
}

int main(){
cin>>n>>m; 

vis_all()

}
