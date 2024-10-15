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
 int n,t1; cin>>n;
 int a[n]; for(int &x:a) cin>>x;
 sort(a,a+n,greater<int>());
 deque<int> q;
 for(int i=0; i<n; i++){
  if(q.empty()) q.push_back(a[i]);
  else{
   q.push_front(a[i]);
   t1=q.back();
   q.pop_back();
   q.push_front(t1);
  }
 }
 while(q.size()){
  cout<<q.front()<<" ";
  q.pop_front();
 }
    return 0;
}