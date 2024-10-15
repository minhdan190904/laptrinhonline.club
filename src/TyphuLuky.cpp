#include "bits/stdc++.h"
#define int long long
#define db double
#define endl "\n"
#define rd(x) fixed<<setprecision(x)
#define pii pair<int,int>
#define x first
#define y second
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//template <typename T>
//using ordered_set = tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;
const int MOD = 1e9+7;

using namespace std;

int cx[] = {1,-1,0,0,1,-1,1,-1};
int cy[] = {0,0,1,-1,-1,1,1,-1};

signed main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 int m,n; cin>>m>>n;
 int a[m][n];
 for (int i = 0; i < m; ++i)
 {
  for (int j = 0; j < n; ++j)
  {
   cin>>a[i][j];
  }
 }
 int check;
 int vis[m+5][n+5] = {};
 queue<pii> q;
 int res=0;
 pii temp,tt;
 for (int i = 0; i < m; ++i)
 {
  for (int j = 0; j < n; ++j)
  {
   check=true;
   if(!vis[i][j]){
    q.push({i,j});
    vis[temp.x][temp.y]=1; 
    while(q.size()){
     temp = q.front();
     q.pop();
     for(int k=0; k<8; k++){
      tt.x = temp.x+cx[k];
      tt.y = temp.y+cy[k];
      if(tt.x>=0 and tt.x<m and tt.y>=0 and tt.y<n and !vis[tt.x][tt.y]){
       if(a[tt.x][tt.y]<=a[temp.x][temp.y]) q.push(tt);
       else {
        if(a[temp.x][temp.y]==a[i][j]) check=false;
        continue;
       }
       vis[tt.x][tt.y]=true;
      }
     }
    }
    if(check) res++;
   }
  }
 }
 cout<<res;
 cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
    return 0;
}