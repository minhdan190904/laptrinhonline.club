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
kazuha_ve_di(){
 int n,k; cin>>n>>k;
 int a[n]; for(int &x:a) cin>>x;
 sort(a,a+n,greater<int>());
 int i = 0;
 int res = 0;
 while(a[i]>0){
  res += a[i];
  i++;
  a[i]-=i*k;
 }
 cout<<res;
 return 0;
}