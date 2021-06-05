#include<bits/stdc++.h>
using namespace std ; 
#define ll long long ; 
const int inf=2e5;

int main(){
int n , x; 
cin>>n>>x; 
vector<int> v;
for(int i=0;i<n;i++){
cin>>v[i]; 
}

int s=0,i=0,j=0; 
sort(v.begin(),v.end()); 

do{
if(v[i]+v[n-j-1]<=x){
s++;
v.erase(v.begin()+ i);
i++;
v.erase(v.begin()+n-j-1);
j++;
}
else if(v[n-j-1]<=x){
s++; 
v.erase(v.begin()+n-j-1);
j++;
}
}while(i!=j);

if(!v.empty())
s++; 

cout<<s;
}
