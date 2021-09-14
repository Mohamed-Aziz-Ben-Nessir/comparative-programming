#include<bits/stdc++.h>
using namespace std ; 
const int inf=2e5; 
#define ll long long ; 

int main(){
int n , m , k ; 
cin >>n>>m>>k ; 
int tn[n],tm[m]; 
for(int i=0;i<n;i++)
cin>>tn[i]; 
for(int i=0;i<m;i++) 
cin>>tm[i]; 

sort(tm,tm+m); 
sort(tn,tn+n); 

int s=0,j=0;
for(int i=0;i<n;i++){
while(j<m&&tm[j]<tn[i]-k)
j++;
if(j<m&&tm[j]<=tn[i]+k)
++s,j++;
}

cout <<s ; 

}
