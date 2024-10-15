#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
 ll n; cin >> n;
 ll r = -1;
 ll a[n];
 for(ll &x : a)
 {
  cin >> x;
  x -= 1;
  cout << 1 + (x + 1) * x / 2 << endl;
 }
    return 0;
}