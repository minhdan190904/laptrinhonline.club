#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int m, n, d; cin >> m >> n >> d;
 vector<int> a;
 for(int i = 0; i < m; i++){
  for(int j = 0; j < n; j++){
   int x;
   cin >> x;
   a.push_back(x);
  }
 }
 sort(a.begin(), a.end());
 int k = a.size();
 int t = k / 2;
 int M = a[t];
 ll res = 0;
 for(int i = 0; i < k; i++){
  int temp = abs(a[i] - M);
  if(temp % d != 0){
   cout << -1;
   return 0;
  }
  res += (temp / d);
 }
 cout << res;
    return 0;
}