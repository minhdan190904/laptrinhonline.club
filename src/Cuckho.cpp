#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
const int MOD = 1000000007;
minhdan()
{
    int t; cin >> t;
    while(t--){
     ll n; cin >> n;
     ll temp = (1 + n) * n / 2;
     ll g = temp%MOD;
     ll res = (g*g)%MOD;
     cout << res << " ";
 }
    return 0;
}