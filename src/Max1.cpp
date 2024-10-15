#include "bits/stdc++.h"
#define db double
#define minhdan main
#define FOR(i,a,b) for (int i=a;i<=b;i++)
#define FOD(i,a,b) for (int i=a;i>=b;i--)
#define TIME "Time elapsed : "<<(double)clock()/1000<<" s"
#define int long long
#define pii pair<int,int>
const int MOD=1e9+7;
using namespace std;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int n; cin >> n;
 int a[n]; for(int &x:a) cin >> x;
 int res = 0;
 int m = a[0];
 for(int i = 1; i < n; i++){
  if(m >= a[i]){
   a[i] = m + 1;
   res++;
  }
  m = max(m,a[i]);
 }
 cout << res;
 return 0;
}