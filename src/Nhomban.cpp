#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, x, y;
    cin >> n >> m;
    vector<int> a[n+1];
    bool v[n+1];
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    int r = 0;
    int l = 0;
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        if (!v[i]) {
            int cnt = 0;
            v[i] = true;
            q.push(i);
            while (!q.empty()) {
                int k = q.front();
                q.pop();
                cnt++;

                for (int x : a[k]) {
                    if (!v[x]) {
                        v[x] = true;
                        q.push(x);
                    }
                }
            }
            l = max(cnt, l);
            r++;
        }
    }
    cout << r << endl << l;
    return 0;
}