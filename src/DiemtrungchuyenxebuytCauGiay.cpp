#include "bits/stdc++.h"
#define db double
#define minhdan main
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FOD(i,a,b) for(int i=a;i>=b;i--)
#define int long long
#define pii pair<int,int>
#define pb push_back
#define pf push_front
#define rd(x) fixed<<setprecision(x)
const int MOD=1e9+7;
using namespace std;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int t, d; cin >> t >> d;
 int n; cin >> n;
 map<int, int> m;
 int a[n];
 FOR(i, 0, n-1){
  cin >> a[i];
  if(a[i] > t){
   a[i]-=t;
   int k = a[i]/d;
   if(a[i]%d!=0) k++;
   m[k]++;
  }
  else m[0]++;
 }
 int temp = -1, res = 0;
 for(auto it:m){
  if(it.second > temp){
   temp = it.second;
   res = it.first;
  }
 }
 cout << res + 1;
    return 0;
}