#include <iostream>
#define ll long long
using namespace std;

class Kenshi {
public:
    ll solve(ll m, ll n, ll a[]) {
        if (m < 0)
            return 0;
        ll dp[m + 1] = {};
        dp[0] = 1;
        for (int i = 0; i < n; i++) {
            for (int j = a[i]; j <= m; j++) {
                dp[j] += dp[j - a[i]];
            }
        }
        return dp[m];
    }
};

int main() {
    Kenshi g;
    ll n, m;
    cin >> m >> n;
    ll a[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << g.solve(m, n, a);
    return 0;
}