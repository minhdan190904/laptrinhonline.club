#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
struct diem
{
 int x, y;
};
bool check(diem a, int n)
{
 return (a.x > 0) and (a.y > 0) and (a.x <= n) and (a.y <= n);
}
int slv(diem s, diem e, int n)
{
 bool v[1001][1001] = {};
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
   if(check(k, n) and !v[k.x][k.y])
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
    int n;
    cin >> n;
    diem a, b, e;
    cin >> a.x >> a.y;
    cin >> b.x >> b.y;
    cin >> e.x >> e.y;
 int res1 = slv(a, e, n);
 int res2 = slv(b, e, n);
 if(res1 == res2) cout << "0" << endl;
 else if(res1 < res2 and res1 > 0) cout << "1" << endl;
 else cout << "2" << endl;
 cout << res1 << " " << res2;
    return 0;
}