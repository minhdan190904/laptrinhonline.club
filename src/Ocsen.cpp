#include "bits/stdc++.h"
#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)
#define MOD 1000000007
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define x first
#define y second

using namespace std;

signed main(){
 int a,b,h;cin>>a>>b>>h;
 int res = (h-a)/(a-b);
 if(res*a-(res-1)*b>=h){
  cout<<res;return 0;
 }

 else if((res+1)*a-res*b>=h){
  cout<<res+1;return 0;
 }

 else{
 cout<<res+2;return 0; 
 }
 return 0;
}