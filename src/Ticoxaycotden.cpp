#include "bits/stdc++.h"
#define ll long long
using namespace std;
ll counth(ll a, ll m, ll n) {
    ll k = (m + a - 1) / a;
    ll l = n / a;
    return l - k + 1;
}
int main() {
    ll l, r;
    cin >> l >> r;
    ll a = 2;
    ll i = 1;
    vector<ll> res;
    while (a <= r) {
        ll te = counth(a, l, r);
        res.push_back(te);
        i++;
        a = pow(2, i);
    }
    ll n = res.size();
 ll dd = 0;
 ll t = 0;
 for(int i = n - 1; i >= 0; i--){
  res[i] -= t;
  t += res[i];
  dd += res[i] * (i+1);
 }
 cout << dd;
    return 0;
}