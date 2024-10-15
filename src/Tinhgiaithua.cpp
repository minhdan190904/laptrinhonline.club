#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
const int mod = 1e9+7;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int n; cin >> n;
 ll res = 1;
 for(int i = 1; i <= n; i++){
  res *= i;
  res %= mod;
 }
 string s = to_string(res);
 for(int i = 0; i < 9 - s.size(); i++) cout << "0";
 cout << res;
    return 0;
}