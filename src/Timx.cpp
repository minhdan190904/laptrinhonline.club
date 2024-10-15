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
 string s; cin >> s;
 int k,h,res;
 if(s[0] == 'x'){
   k = s[2] - '0';
 h = s[4] - '0';
  if(s[1] == '+'){
   res = h-k;
  }
  else{
   res = h + k;
  }
 }
 else{
 k = s[0] - '0';
 h = s[4] - '0';
 if(s[1] == '+'){
  res = h - k;
 }
 else res = k - h;
 }
 if(res < 0) cout << "Khong tim duoc x";
 else cout << "x="<<res;
    return 0;
}