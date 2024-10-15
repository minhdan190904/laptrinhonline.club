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
  int n; cin >> n;
  string so = to_string(n);
  int k = so.size();
  int g = so[k-1] - '0';
  if(g % 2 == 0 or g == 5) cout << "-1" << endl;
  else{
   string rem = "1";
   int res = 0;
   while(true){
    int fg = stoi(rem);
    res++;
    fg = fg%n;
    if(fg == 0){
     break;
    }
    fg = fg*10+1;
    rem = to_string(fg);
   }
   cout << res << endl;
  }
 }
    return 0;
}