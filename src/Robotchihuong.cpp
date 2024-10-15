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
 string s; cin >> s;
 int cnt1 = 0, cnt2 = 0;
 string s2; cin >> s2;
 for(char x:s2){
  if(x == 'T') cnt1++;
  else cnt2 = cnt2 - 1;
 }
 map<string, int> m;
 m["D"] = 0;
 m["DB"] = 45;
 m["B"] = 90;
 m["TB"] = 135;
 m["T"] = 180;
 m["TN"] = 225;
 m["N"] = 270;
 m["DN"] = 315;
 int res = (cnt1+cnt2)*45 + m[s];
 res%=360;
 if(res < 0) res += 360;
 for(auto it:m) {
  if(it.second == res){
   cout << it.first;
   return 0;
  }
 }
    return 0;
}