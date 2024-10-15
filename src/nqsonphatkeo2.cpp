#include "bits/stdc++.h"
#define int long long
#define rd(x) fixed<<setprecision(x)
#define pss pair<string, string>

using namespace std;


signed main(){
 int n; cin>>n;
 int a[n]; for(int &x:a)cin>>x;
 int res = 1e18;
 for(int i = 1; i < n; i++){
  int g = __gcd(a[i-1],a[i]);
  res = min(res,g);
 }
 cout<<res;
 return 0;
}