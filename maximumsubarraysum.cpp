#include<bits/stdc++.h>
using namespace std ; 

int main(){
int n  ; 
cin >>n ;
int a ; 
long long msf=-1e18, ans=-1e18; 

for(int i=0;i<n;++i){
cin>>a; 
msf=max((long long)a,msf+a);
ans=max(msf,ans);
}

cout <<ans;
}
