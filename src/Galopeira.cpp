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
 int t; cin >> t;
 while(t--){
  string s; cin >> s;
  int k = s.size();
  int k1 = k/100;
  int k2 = k%100;
  if(k < 10) cout << "0.0" << k << endl;
  else{
   cout << k1 << ".";
   if(k2 < 10) cout << "0" << k2 << endl;
   else cout << k2 << endl;
  }
 }
    return 0;
}