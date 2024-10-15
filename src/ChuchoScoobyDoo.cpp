#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
    int n, k, h, l; cin >> n;
    int a[n+1];
    bool v[n+1] = {};
    for(int i = 1; i <= n; i++) cin >> a[i];
    queue<int> q;
    v[1] = true;
    q.push(1);
    int cnt = 0;
    while(!q.empty()){
     l = q.size();
     while(l--){
      k = q.front();
      if(k == n){
       cout << cnt;
       return 0;
   }
      q.pop();
      h = k + 1;
      if(!v[h] and a[h] == 0 and h <= n)
      {
       v[h] = true;
       q.push(h);
   }
      h = k + 2;
      if(!v[h] and a[h] == 0 and h <= n)
      {
       v[h] = true;
       q.push(h);
   }
  }
  cnt++;
 }
 cout << "khong qua duoc suoi";
    return 0;
}