#include<bits/stdc++.h>
using namespace std ; 

int main(){

long long n,s=0 ; 
cin >>n;
long long  t[n]; 

for(int i=0;i<n;i++) 
cin>>t[i];

for(int i=0;i<n-1;i++) 
if(t[i+1]<t[i]){
s+=t[i]-t[i+1]; 
t[i+1]=t[i];
}

cout<<s; 



}
