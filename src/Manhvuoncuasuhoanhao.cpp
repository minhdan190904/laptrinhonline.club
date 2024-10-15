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

int cx[] = {1,1,-1,-1,0,0,1,-1};
int cy[] = {0,1,0,1,1,-1,-1,-1};

int max_i, max_j, min_i, min_j, dem, x, y, m, n;

int a[500][500];

void dfs(int i, int j){
 dem++;
 max_i=max(max_i,i);
 max_j=max(max_j,j);
 min_i=min(min_i,i);
 min_j=min(min_j,j);
 a[i][j]=0;
 for(int k=0; k<8; k++){
  x=i+cx[k];
  y=j+cy[k];
  if(x>=0 and x<m and y>=0 and y<n and a[x][y]==1) dfs(x,y);
 }
}

signed main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 cin>>m>>n;
 for (int i = 0; i < m; ++i)
 {
  for (int j = 0; j < n; ++j)
  {
   cin>>a[i][j];
  }
 }

 int cnt=0;

 for (int i = 0; i < m; ++i)
 {
  for (int j = 0; j < n; ++j)
  {
   if(a[i][j]==1){
    max_i=0;
    max_j=0;
    min_i=1000;
    min_j=1000;
    dem=0;
    dfs(i,j);
    if(dem==(max_i-min_i+1)*(max_j-min_j+1)) cnt++;
   }
  }
 }
 cout<<cnt;
    return 0;
}