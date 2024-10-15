#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
int slove(int n, int k, int *a, int s, int f)
{
 bool v[100001] = {};
 int res = 0, t, h;
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
  for(int j = 0; j < k; j++)
  {
  t = h + a[j];
  if(t > 0 and t <= n)
  {
   if(!v[t])
   {
    q.push(t);
    v[t] = true;
   }
  }
  }
 }
 res++;
}
 return -1;
}
minhdan()
{
    int n, k, s, f; cin >> n >> k;
    int a[k]; for(int &x : a) cin >> x;
    cin >> s >> f;
    cout << slove(n, k, a, s, f);
    return 0;
}