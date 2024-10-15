#include "bits/stdc++.h"
#define ll long long
#define kenshi main
using namespace std;
kenshi()
{
    ll n; cin >> n;
    ll i = 1;
    ll a[n];
    for (ll &x : a)
    {
        cin >> x;
        if (x % 2 != 0) cout << "Test Case " << "#" << i << ": Kratos" << endl;
        else cout << "Test Case " << "#" << i << ": Atreus" << endl;
        i++;
    }
    return 0;
}