#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MSB(mask) 63 - __builtin_clzll(mask) 
#define LSB(mask) __builtin_ctzll(mask) 
#define ONE(mask) __builtin_popcountll(mask)
#define CHECK(mask, bit) (mask & (1LL << bit))
#define ON(mask, bit) (mask | (1LL << bit))
#define OFF(mask, bit) (mask & ~(1LL << bit))
#define CHANGE(mask, bit) (mask ^ (1LL << bit))
#define mem(a, b) memset(a, b, sizeof(a));
#define pb push_back
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define fi first
#define se second
#define ll long long
#define int long long
#define vt vector
const int mod = 1e18;

void solve() {
    int x, y, a, z, t, b;
    cin >> x >> y >> a >> z >> t >> b;
    if (a > b * 2 || abs(x - z) + abs(y - t) <= a) 
        cout << "1\n";
    else 
        cout << "0\n";
}
signed main() { 
// #ifndef ONLINE_JUDGE
//     freopen("inputs.txt", "rt", stdin);
//     freopen("outputs.txt", "wt", stdout);
// #endif
    fast;
    int t = 1;
    cin >> t;
    while (t --) {
        solve();
    }
    return 0;
}