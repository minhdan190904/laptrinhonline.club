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
 char a[100][100];
 char b[100][100];
 int n,m;

bool check(int x, int y){
 if(n-x+1<m or n-y+1<m) return false;
  for(int i=1;i<=m;i++){
   for(int j=1;j<=m;j++)
   {
    if(b[i][j]!=a[x+i-1][y+j-1]) return false; 
   }
  }
 return true;
}

signed main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 cin>>n>>m;
 for(int i=1;i<=n;i++)
  for(int j=1;j<=n;j++) cin>>a[i][j];
 for(int i=1;i<=m;i++)
  for(int j=1;j<=m;j++) cin>>b[i][j];  
 for(int i=1;i<=n;i++){
  for(int j=1;j<=n;j++){
   if(a[i][j]==b[1][1]){
    if(check(i,j)){
     cout<<"Yes"; return 0;
    }
   }
  }
 }
 cout<<"No";
    return 0;
}