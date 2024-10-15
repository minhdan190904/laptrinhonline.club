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
 int L, l; cin >> L >> l;
 int k = L/l;
 int q = L - k*l;
 if(q == 0){
  cout << l * (k-1) + k - 1;
 }
 else{
  cout << q + l * (k - 1) + k;
 }
    return 0;
}