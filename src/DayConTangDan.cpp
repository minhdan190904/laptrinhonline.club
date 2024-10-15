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
int n;
int a[25];
vector<string> st;

void TRY(int idx, int temp, string tam){
 if(idx==n-1) return;
 if(temp<a[idx+1]){
  st.push_back(tam+" "+to_string(a[idx+1]));
  TRY(idx+1, a[idx+1], tam+" "+to_string(a[idx+1]));
 }
 TRY(idx+1, temp, tam);
}

signed main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 cin>>n; for(int i=0;i<n;i++){
  cin>>a[i];
 }
 for(int i=0;i<n;i++) TRY(i,a[i],to_string(a[i]));
 sort(st.begin(),st.end());
 for(auto x:st) cout<<x<<endl;
    return 0;
}