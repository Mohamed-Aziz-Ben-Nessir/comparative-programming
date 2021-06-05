#include<bits/stdc++.h>
using namespace std ; 

int n;
int t[101]; 
set<int>dp;

int sum(int i, int s ){
if(i==n)
return 0

dp.add(s);
sum(i++,s);
sum(i++,s+t[i]);
}


int main(){
cin >>n ; 
for(int i=0;i<n;++i) 
cin>>t[i] ; 

cout<<sum(0,0);

cout<<s.size(); 

for(auto i=dp.begin()+1;dp.end();++i)
cout<<*i; 

}
