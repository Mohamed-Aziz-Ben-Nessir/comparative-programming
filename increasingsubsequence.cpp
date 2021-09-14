#include<bits/stdc++.h>
using namespace std ; 

int n ; 
vector<int> v; 

int  solve(int i , int s){

if(i==n)
return s; 

int ch1=solve(i++,s);
int ch2=0;

if(v[prev]<=v[i])
ch2=solve(i++,s+v[i])

return max(ch1,ch2);
}

int main(){
cin>>n; 
for(int i=0;i<n;++i) 
cin>>v[i];
cout<<solve(0,0); 
}
