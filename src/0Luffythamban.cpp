#include "bits/stdc++.h"
#define ll long long
using namespace std;
int main() {
    ll n; cin >> n;
    vector<ll> a(n); for(ll &x : a) cin >> x;
    sort(a.begin(), a.end());
    ll m = a[n/2];
    ll res = 0;
    for(int x : a) res += abs(x-m);
    cout << res;
    return 0;
}