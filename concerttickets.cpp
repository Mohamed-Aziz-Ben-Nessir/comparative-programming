#include<bits/stdc++.h>
using namespace std ;
#define ll long long ; 


int main(){
int n,m ; 
cin >>n>>m ; 
set<int> s; 

for(int i=0;i<n;++i){
int h ; 
cin>>h; 
s.insert(h); 
}

for(int i=0;i<m;++i){
int t; 
cin>>t;
set<int>::iterator  it=s.upper_bound(t);
if(it==s.begin()){
cout<<-1<<"\n";
}
else{
cout<<*(--it)<<"\n";
s.erase(it);
}
}

}
