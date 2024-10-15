#include "bits/stdc++.h"
using namespace std;
const int MOD = 1e9+7;
int solve(string s) {
    int n = s.size();
    if (n == 0) return 0;
    int dp[n+1] = {};
    dp[0] = 1;
    for (int i = 1; i <= n; ++i) {
        if (s[i - 1] != '0') {
            dp[i] = dp[i - 1];
            dp[i] %= MOD;
        }
        if (i > 1 && s[i - 2] != '0') {
            int num = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
            if (num >= 1 && num <= 26) {
                dp[i] += dp[i - 2];
                dp[i] %= MOD;
            }
        }
    }
    return dp[n];
}

int main() {
    string s;
    cin >> s;
    cout<<solve(s);
    return 0;
}