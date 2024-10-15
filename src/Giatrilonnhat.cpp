#include <bits/stdc++.h>
using namespace std;

#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)
#define MOD 1000000007
#define min(a,b) (a>b?b:a)
#define max(a,b) (a>b?a:b)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define kazuha_ve_di main
#define pii pair<int,int>
#define x first
#define y second

void setup() {
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    fastIO
}

void solve() {
    int n, res = 0, cnt = 0;
    cin >> n;
    int a[n];
    char c[n - 1];
    for (int &x : a) cin >> x;
    for (char &x : c) {
        cin >> x;
        if (x == '-') cnt++;
    }

    sort(a, a + n);
    for (int i = 0; i < cnt; i++) {
        res -= a[i];
    }
    for (int i = cnt; i < n; i++) {
        res += a[i];
    }
    cout << res << endl;
}

kazuha_ve_di() {
    solve();
    return 0;
}