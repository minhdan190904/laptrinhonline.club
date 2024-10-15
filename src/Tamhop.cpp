#include "bits/stdc++.h"
using namespace std;
#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)
#define FOD(i,a,b) for(int i=a;i>=b;i--)
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define MOD 1000000007
#define min(a,b) (a>b?b:a)
#define max(a,b) (a>b?a:b)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define kazuha_ve_di main
void setup(){
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    fastIO
}

const int MINN = 1e18*-1;

kazuha_ve_di(){
 int n; cin>>n;
 int a[n]; for(int &x:a) cin>>x;
 int l_max[n+3] = {};
 int r_max[n+3] = {};
 l_max[0] = MINN;
 r_max[n+1] = MINN;
 for(int i = 1; i <= n; i++){
  l_max[i] = max(l_max[i-1], a[i-1]);
 }
 for(int i = n; i >= 1; i--){
  r_max[i] = max(r_max[i+1], a[i-1]);
 }
 int res = MINN;
 for(int i = 2; i < n; i++){
  res = max(res, l_max[i-1]-a[i-1]+r_max[i+1]);
 }
 cout<<res;
 return 0;
}