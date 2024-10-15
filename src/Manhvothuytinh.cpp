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
struct p{
db x,y; 
};
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int n; cin >> n;
 p s[n];
 db res = 0;
 db ma = 0;
 for(auto g:s){
  cin >> g.x >> g.y;
  db k = sqrt(g.x*g.x+g.y*g.y);
  res+=k;
  ma=max(ma,k);
 }
 cout<< rd(3) << res << endl;
 cout<< rd(3) << ma;
 
    return 0;
}