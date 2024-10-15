#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
ll de2(ll n){
    ll res = 0;
    for(ll i = 5; i <= n; i *= 5){
        res += n/i;
    }
    return res;
}
ll bs(ll n) {
    ll l = 0, h = 5 * n;
    ll res = 0;
    while (l <= h) {
        ll m = (l + h) / 2;
        ll temp = de2(m);
        if (temp == n) {
         res = m;
         h = m-1;
        }
        else if(temp < n) l = m + 1;
  else {
            h = m-1;
        }
    }
    return res;
}
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
 cout << bs(n);
    return 0;
}