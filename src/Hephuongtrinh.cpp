#include "bits/stdc++.h"
#define int long long
#define db double
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
 int t,a,b,c,d; cin>>t;
 while(t--){
  cin>>a>>b>>c>>d;
  if((((b & ~a)|d)|a) == b and (((b & ~a)|d)&c) == d) cout<<"YES\n";
  else cout<<"NO\n";
 }
    return 0;
}