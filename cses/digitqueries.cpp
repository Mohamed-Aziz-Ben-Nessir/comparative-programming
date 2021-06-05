#include<bits/stdc++.h>
using namespace std ; 

int main(){

int q ; 
cin >>q ; 

while(q--){

int n ; 
cin >>n ; 
string s1="",s2=""; 
int prev=0, i=0; 

if(n>prev){
for(int i=1;i<= n/2;i++){
s1+=to_string(i);
s2=to_string(n-i+1)+s2;
}

if(n%2==1) 
s1+=to_string(n/2+1); 

s1+=s2; 
}

prev=n;

cout <<s1[n-1]<<"\n";
}
}
