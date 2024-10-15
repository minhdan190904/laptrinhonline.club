#include "bits/stdc++.h"
#define int long long
#define db double
#define fi first
#define se second
#define endl "\n"
#define rd(x) fixed<<setprecision(x)
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//template <typename T>
//using ordered_set = tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;
const int MOD = 1e9+7;

using namespace std;

signed main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 int t,x,y; cin>>t;
 pair<int,int> a[200], b[200], c[200], d[200];
 
 int f[200];
 f[0] = 0;
 f[1] = 1;
 f[2] = 1;
 
 a[1]= {0,0};
 b[1]= {1,0};
 c[1]= {1,1};
 d[1]= {0,1};
 
 a[2]= {0,1};
 b[2]= {1,1};
 c[2]= {1,2};
 d[2]= {0,2};
 
 for(int i = 3; i<=90; i++){
  f[i] = f[i-2]+f[i-1];
  if(i%2==0){
   a[i] = d[i-2];
   b[i] = c[i-1];
   c[i] = {c[i-1].fi, c[i-1].se+f[i]};
   d[i] = {d[i-2].fi, d[i-2].se+f[i]};
  }
  else{
   a[i] = b[i-2];
   b[i] = {b[i-2].fi+f[i], b[i-2].se};
   c[i] = {b[i-2].fi+f[i], c[i-1].se};
   d[i] = c[i-1];
  } 
 }
 while(t--){
  cin>>x>>y;
  bool check=true;
  for(int i = 3; i<=90; i++){
   if(x>a[i].fi and x < c[i].fi and y>a[i].se and y<c[i].se){
    cout<<i<<endl;
    check=false;
     break;
   }
  }
  if(check) cout<<-1<<endl;
 }
    return 0;
}