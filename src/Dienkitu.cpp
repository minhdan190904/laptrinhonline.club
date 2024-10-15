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
 string s; cin>>s;
 char c = '1';
 int res = 0;
 bool check = false;
 for(int i = 0; i<s.size(); i++){
  if(s[i]!=c and s[i]!='*'){
   res++;
   c = s[i];
  }
  if(s[i]!='*') check = true;
 }
 if(check)cout<<res;
 else cout<<1;
    return 0;
}