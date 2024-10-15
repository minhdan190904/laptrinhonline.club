#include <bits/stdc++.h>
using namespace std;

#define MAXN 100005

int n, a[MAXN], bit[MAXN], ans[MAXN];
pair<int, int> queries[MAXN];

void update(int x, int val) {
    for (; x <= n; x += x & -x)
        bit[x] += val;
}

int query(int x) {
    int sum = 0;
    for (; x > 0; x -= x & -x)
        sum += bit[x];
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        queries[i] = {a[i], i};
    }

    sort(queries + 1, queries + n + 1);

    for (int i = 1; i <= n; i++) {
        if (i == 1 || queries[i].first != queries[i - 1].first)
            a[queries[i].second] = i;
        else
            a[queries[i].second] = a[queries[i - 1].second];
    }

    for (int i = 1; i <= n; i++) {
        ans[i] = query(a[i] - 1);
        update(a[i], 1);
    }

    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
    cout << "\n";

    return 0;
}