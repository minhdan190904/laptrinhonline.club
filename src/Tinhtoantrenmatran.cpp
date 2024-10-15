#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int n, m; cin >> n >> m;
 int a[n+1][m+1];
 int mc[m+1] = {INT_MIN};
 int th[n+1] = {0};
 db res = 0;
 int cnt = 0;
 for(int i = 1; i <= n; i++){
  for(int j = 1; j <= m; j++){
   cin >> a[i][j];
   th[i] += a[i][j];
   mc[j] = max(mc[j], a[i][j]);
   if(i%2 == 0 and j%2!=0 and a[i][j]%3==0){
    res+= a[i][j];
    cnt++;
   }
  }
  cout << th[i] << " ";
 }
 cout << endl;
 for(int i = 1; i <= m; i++){
  cout << mc[i] << " ";
 }
 cout << endl;
 if(cnt == 0) cout << "khong co so thoa man";
 else{
  cout << fixed << setprecision(3) << res/cnt;
 }
    return 0;
}