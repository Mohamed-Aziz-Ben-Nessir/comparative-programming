#include<bits/stdc++.h>
using namespace std; 
#define ll long long 
#define ar array 
const ll inf=1e18; 

int main(){
//ios_base::sync_with_stdio(false);
//cin.tie(NULL); 

int n,a,b; 
cin>>n>>a>>b;
int msf=-1e7,ans=-1e7,c=0;
for(int i=0;i<n;i++){
int x; 
cin>>x;
msf=max(x,msf+x);
c++;
if(c>=a&&c<=b)
ans=max(ans,msf);
if(c>b){
msf=0;
c=0;
}
}
cout<<ans;
}
