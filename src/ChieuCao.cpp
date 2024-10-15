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
 reverse(a,a+n);
 set<int> s; int b[n];
 for(int i = 0; i < n; i++){
  s.insert(a[i]);
  b[i] = s.size();
 }
 int t; cin >> t;
 while(t--){
  int q; cin >> q;
  cout << b[n-q] << endl;
 }
    return 0;
}