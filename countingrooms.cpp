#include<bits/stdc++.h>
using namespace std ; 

int n , m ,ans=0;
vector<vector<bool>> vis; 
vector<pair<int,int>> moves ={{-1,0},{1,0},{0,-1},{0,1}};
string g[1000]; 

bool isvalid(int x, int y){
if(x<0 || x>=n || y<0 || y>=m)
return false ;
if(vis[x][y])
return false ;
return true ;
}

void dfs(int i,int j){
vis[i][j]=true; 
for(auto p: moves)
if(isvalid(i+p.first,j+p.second))
dfs(i+p.first,j+p.second);
}

void connected_components(){
for(int i=0;i<n;++i)
for(int j=0;j<m;++j)
if(!vis[i][j]){
dfs(i,j);
++ans;
}

}

int main(){
cin>>n>>m ; 

vis.resize(n);
for(int i = 0; i < n; ++i)
vis[i].resize(m);
	
for(int i=0;i<n;++i) 
for(int j=0;j<m;++j){
char c;cin>>c; 
if(c=='#')
vis[i][j]=true;
}


connected_components();

cout<<ans; 

}
