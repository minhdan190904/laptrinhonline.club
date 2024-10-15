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
 int n,x,u,v,res=0,temp;cin>>n;
 int t = n;
 priority_queue<int, vector<int>, greater<int>> q;
 while(t--){
  cin>>x; q.push(x);
 }
 if(n==1) {cout<<q.top(); return 0;}
 while(q.size()!=2){
  u = q.top(); q.pop();
  v = q.top(); q.pop();
  q.push(u+v);
  res += u+v;
 }
 temp = q.top(); q.pop();
 cout<<q.top()+temp+res;
 cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
    return 0;
}