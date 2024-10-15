#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int n; cin >> n;
 int a[n], b[n+1], c[n+1], ch = 0, l = 0;
 b[0] = 0, c[0] = 0;
 for(int i = 0; i < n; i++){
  cin >> a[i];
  if(a[i]%2==0) ch++;
  else l++;
  b[i+1] = ch;
  c[i+1] = l;
 }
 int res = 0, r1, r2;
 for(int i = 1; i <= n; i++){
  for(int j = i; j <= n; j++){
   r1 = b[j] - b[i-1];
   r2 = c[j] - c[i-1];
   if(r1 >= r2) res++;
  }
 }
 cout << res;
    return 0;
}