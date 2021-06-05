#include<bits/stdc++.h>
using namespace std ; 

int n,m; 
vector<vector<pair<int,int>>> par; 
int sx,sy,ex,ey; 
vector<vector<bool>> vis ;
vector<pair<int,int>> moves ={{1,0},{-1,0},{0,1},{0,-1}}; 


bool isvalid(int x, int y){
if(x<0||y<0||x>=n||y>=m)
return false ;
if(vis[x][y])
return false ;
return true ;
}

void bfs(){
queue<pair<int,int>> q; 
q.push({sx,sy}); 
while(!q.empty()){
int cx= q.front().first; 
int cy= q.front().second;
q.pop();
for(auto mv : moves)
if(isvalid(cx+mv.first,cy+mv.second)){
q.push({cx+mv.first,cy+mv.second});
vis[cx+mv.first][cy+mv.second]=true;
par[cx+mv.first][cy+mv.second]={mv.first,mv.second};
}
}
}

int main(){
cin>>n>>m; 
par.resize(5001);
vis.resize(5001);
for(int i=0;i<m;++i){ 
par[i].resize(5001);
vis[i].resize(5001);
}

for (int i = 0; i < n; ++i)
for (int j = 0; j < m; ++j)
{
par[i][j] = {-1,-1};
char c; cin >> c;
if(c == '#')
vis[i][j] = true;
if(c == 'A')
sx = i, sy = j;
if(c == 'B')
ex = i, ey = j;
}
bfs();

if(!vis[ex][ey]){
cout<<"NO";
return 0;
}
cout<<"YES"<<endl;
vector<pair<int,int>> ans;
pair<int,int> c = {ex,ey};

while(c.first!=sx || c.second!=sy){
ans.push_back(par[c.first][c.second]);
c.first-=ans.back().first;
c.second-=ans.back().second;
}
reverse(ans.begin(),ans.end());
cout<<ans.size()<<endl; 

for(auto c:ans){
if(c.first == 1 and c.second ==0)
cout << 'D';
else if(c.first == -1 and c.second ==0)
cout << 'U';
else if(c.first == 0 and c.second == 1)
cout << 'R';
else if(c.first == 0 and c.second == -1)
cout << 'L';
		
}
}
