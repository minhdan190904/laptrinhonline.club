#include <bits/stdc++.h>
#define int long long
#define db double
#define endl "\n"
#define rd(x) fixed<<setprecision(x)
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    multiset<int> s;
    int x;
    while (n--) {
        cin >> x;
        s.insert(x);
    }

    while (k--) {
        cin >> x;

        auto it = s.lower_bound(x);

        if (it == s.begin() && (*it > x || it == s.end())) {
            cout << -1 << endl;
            continue;
        }

        if (it == s.end()) {
            it--;
            if (*it < x) {
                cout << *it << endl;
                s.erase(it);
            } else {
                cout << -1 << endl;
            }
            continue;
        }

        if (*it > x) {
            it--;
        }

        cout << *it << endl;
        s.erase(it);
    }

    return 0;
}