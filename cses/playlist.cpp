#include<bits/stdc++.h>
using namespace std ;
#define ll long long  
const ll inf=1e18;

int main(){

int n ; 
cin >>n ; 

vector<int> v(n);
map<int,int> mp; 

for(int i=0;i<n;i++){
int a ; 
cin >>a; 
v.push_back(a);
}

int ans=0; 
for(int i=0,j=0;i<n;i++) {
while((j<n)&&(mp[v[j]]<1)){
mp[v[j]]++;
++j;
}
ans=max(j-i,ans);
mp[v[i]]--;
}
cout<<ans; 
}
