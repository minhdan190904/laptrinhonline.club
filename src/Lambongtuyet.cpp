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
 queue<int> q;
 int n; cin>>n; int a[n], b[n];
 for(int &x:a) cin>>x;
 for(int &x:b) cin>>x;
 int temp,l;
 for (int i = 0; i < n; ++i)
 {
  temp=0;
  q.push(a[i]);
  l=q.size();
  for(int j=0;j<l;j++){
   temp+=min(b[i],q.front());
   if(b[i]<q.front()) q.push(q.front()-b[i]);
   q.pop();
  }
  cout<<temp<<" ";
 }
    return 0;
}