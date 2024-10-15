#include "bits/stdc++.h"
using namespace std;

int solve(vector<int> &a, int n, int m) {
    sort(a.begin(), a.end());
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (m >= a[i]) {
            m -= a[i];
            cnt++;
     }
     else break;
    }
    return cnt;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin>>n>>m;
    vector<int> a(n);
    for(int &x:a) cin>>x;
    cout << solve(a, n, m);
    return 0;
}