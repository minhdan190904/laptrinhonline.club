#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
int slove(int n, int k, int m, int s, int f)
{
 bool v[1001] = {};
 int res = 0, t1, t2, h;
 queue<int> q;
 v[s] = true;
 q.push(s);
 while(!q.empty())
 {
  int l = q.size();
  for(int i = 0; i < l; i++)
  {
  h = q.front();
  if(h == f) return res;
  q.pop();
  t1 = h + k;
  t2 = h - m;
  if(t1 > 0)
  {
   if(!v[t1])
   {
    q.push(t1);
    v[t1] = true;
   }
  }
  if(t2 > 0)
  {
   if(!v[t2])
   {
    q.push(t2);
    v[t2] = true;
   }
  }
 }
 res++;
}
 return -1;
}
minhdan()
{
    int n, k, m, s, f; cin >> n >> k >> m >> s >> f;
    cout << slove(n, k, m, s, f);
    return 0;
}