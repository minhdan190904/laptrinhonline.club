#include "bits/stdc++.h"
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//template <typename T>
//using ordered_set = tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;
#define int long long
#define db double
#define endl "\n"
#define rd(x) fixed<<setprecision(x)
const int MOD = 1e9+7;

signed main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 string s; cin>>s;
 int n = s.size();
 unordered_map<int,int> m;
 int res=0,temp=0;
 for(int i=0; i<n; i++){
  temp+=s[i]-'0';
  temp%=9;
  res+=m[temp];
  m[temp]++;
  if(temp==0) res++;
  res%=MOD;
 }
 cout<<res;
    return 0;
}