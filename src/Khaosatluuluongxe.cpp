#include "bits/stdc++.h"
#define ll long long
#define db double

using namespace std;

ll bs(ll x, ll d[], int n)
{
    ll l = 0, r = n - 1;
    ll res = 0;
    while (l <= r)
    {
        ll m = (l + r) / 2;
        if (d[m] <= x)
        {
            res = m;
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    return res;
}

int main()
{
    ll m, n;
    cin >> m >> n;
    ll b[m];
    for (ll &x : b)
        cin >> x; // mang xang
    ll c[m - 1];
    for (ll &x : c)
        cin >> x; // mang kc
    ll a[n];
    for (ll &x : a)
        cin >> x; // mang xang ban dau
    ll d[m];
    d[0] = 0;
    ll e[m];
    e[0] = 0;
    ll res[m] = {0};
    for (int i = 1; i < m; i++)
    {
        d[i] = d[i - 1] - (c[i - 1] - b[i - 1]);
  e[i] = max(e[i - 1], -1 * d[i]);
    }
    for (ll i = 0; i < n; i++)
    {
        res[bs(a[i], e, m)]++;
    }
    for (ll x : res)
        cout << x << " ";
    return 0;
}