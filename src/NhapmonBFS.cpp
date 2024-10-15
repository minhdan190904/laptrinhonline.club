#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
struct diem
{
 int x, y;
};
bool check(diem a, int n, int m)
{
 return (a.x > 0) and (a.y > 0) and (a.x <= n) and (a.y <= m);
}
int slv(diem s, diem e, int n, int m)
{
 bool v[1001][1001];
 memset(v, false, sizeof(v));
    int cx[] = {-2, -1, 1, 2, -2, -1, 1, 2};
    int cy[] = {-1, -2, -2, -1, 1, 2, 2, 1};
 diem h, k;
 int res = 0;
 queue<diem> q;
 q.push(s);
 while(!q.empty())
 {
  int l = q.size();
  for(int i = 0; i < l; i++)
  {
  h = q.front();
  q.pop();
  if(h.x == e.x and h.y == e.y) return res;
  for(int j = 0; j < 8; j++)
  {
   k.x = h.x + cx[j];
   k.y = h.y + cy[j];
   if(check(k, n, m) and !v[k.x][k.y])
   {
    q.push(k);
    v[k.x][k.y] = true;
   }
  }
 }
  res++;
 }
 return -1;
}
int main() {
    int n, m;
    cin >> n >> m;
    diem s, e;
    cin >> s.x >> s.y >> e.x >> e.y;
 int res = slv(s, e, n, m);
    if(s.x == e.x and s.y == e.y) cout << "0";
 else if(res != -1) cout << res;
 else cout << "-1";
    return 0;
}