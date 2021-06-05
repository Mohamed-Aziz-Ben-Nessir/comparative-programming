#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
#define ar arry 
const ll inf =1e18; 

int main(){
int n ; 
cin >>n ; 
int t[n],a[n];

for(int i=0;i<n;++i){
cin>>t[i]; 
a[i]=i-1; 
while(~a[i]&&t[a[i]]>=t[i])
	a[i]=a[a[i]];
cout<<a[i]+1<<" " ;
}
}
