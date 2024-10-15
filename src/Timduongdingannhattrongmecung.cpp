#include "bits/stdc++.h"
#define ll long long
#define db double
using namespace std;
struct mc{
 int x, y;
};
int main()
{
 int cx[] = {1, -1, 0, 0};
 int cy[] = {0, 0, -1, 1};
    int n, m, l, cnt = 0; cin >> n >> m;
    vector<vector<bool>> v(n+2, vector<bool>(m+2));
    vector<vector<int>> a(n+2, vector<int>(m+2));
    for(int i = 1; i <= n; i++)
    {
     for(int j = 1; j <= m; j++)
     {
      cin >> a[i][j];
  }
 }
 mc s, e, k, h;
 cin >> s.x >> s.y >> e.x >> e.y;
 queue<mc> q;
 q.push(s);
 v[s.x][s.y] = true;
 while(!q.empty())
 {
  l = q.size();
  while(l--){
  k = q.front();
  if(k.x == e.x and k.y == e.y){
   cout << cnt;
   return 0;
  }
  q.pop();
  for(int i = 0; i < 4; i++)
  {
   h.x = k.x + cx[i];
   h.y = k.y + cy[i];
   if(h.x > 0 and h.y > 0 and h.x <= n and 
   h.y <= m and a[h.x][h.y] == 0 and !v[h.x][h.y]){
    q.push(h);
    v[h.x][h.y] = true;
   }
  }
 }
 cnt++;
}
cout << "-1";
    return 0;
}