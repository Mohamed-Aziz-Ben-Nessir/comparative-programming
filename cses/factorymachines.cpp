#include<bits/stdc++.h>
using namespace std ;
#define ll long long 
const ll inf=1e18; 

int main(){
int n,t ; 
cin>>n>>t; 
vector<int,int> v;
for(int k=0;k<n;k++){
int x; 
cin>>x; 
v.push_back(make_pair(x,0));
}

sort(v.begin(),v.end()); 

for(int j=0;j<t;j++){
int i=0;
while(v[i].second+v[i].first>v[i+1].second+v[i+1].first)
i++;
v[i].second+=v[i].first; 
}

cout<<v[1].second ;
}
