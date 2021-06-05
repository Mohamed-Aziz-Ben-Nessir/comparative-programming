#include<bits/stdc++.h>
using namespace std ; 


int main(){
int n; 
cin>>n; 
vector<int> v[n] ; 

for(int i=0;i<n;++i ) 
cin>>v[i];

int s=0;
for(int i=0;i<n/2;i++){
s+=max(v[i],v[i-n]);
v.erase(max(v[i],v[i-n)]);
v.erase(max(v[i],v[i-n]));
}

}

