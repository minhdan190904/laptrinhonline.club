#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
struct diem
{
 int x, y;
};
void slove(diem a)
{
 bool v[1001][1001] = {};
 diem h, k, g;
 int res = 0;
 queue<diem> q;
 v[a.x][a.y] = true;
 q.push(a);
 while(!q.empty())
 {
  int l = q.size();
  res += l;
  for(int i = 0; i < l; i++)
  {
   k = q.front();
      q.pop();
      h.x = k.y; h.y = k.x / 2;
      if(k.x % 2 == 0 and !v[h.x][h.y])
      {
       q.push(h);
       v[h.x][h.y] = true;
   }
   g.x = (k.y + 1) / 2; g.y = k.x;
   if(k.y % 2 != 0 and !v[g.x][g.y])
   {
    v[g.x][g.y] = true;
    q.push(g);
   }
  }
 }
 cout << res;
}
minhdan()
{
    diem a; cin >> a.x >> a.y;
    slove(a);
    return 0;
}