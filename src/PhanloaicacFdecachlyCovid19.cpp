#include <bits/stdc++.h>
#define ll long long
#define db double
using namespace std;
int b[10000001];
void bfs(vector<int> *a, bool *v, int *res, int k) {
    queue<int> q;
    for (int i = 0; i < k; i++) {
        q.push(b[i]);
        v[b[i]] = true;
    }
    int cnt = 0;
    while (!q.empty()) {
        res[cnt] = q.size();
        for (int i = 0; i < res[cnt]; i++) {
            int r = q.front();
            q.pop();
            for (int x : a[r]) {
                if (!v[x]) {
                    q.push(x);
                    v[x] = true;
                }
            }
        }
        cnt++;
    }
}
int main() {
    int n, m, x, y;
    cin >> n >> m;
    vector<int> a[n + 1];
    bool v[n + 1] = {};
    int res[n + 1] = {};
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    int k;
    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> b[i];
    }
    bfs(a, v, res, k);
    for (int i = 0; i < n; i++) {
        if (res[i] != 0) {
            cout << "F" << i << ": " << res[i] << endl;
        } else {
            break;
        }
}
    return 0;
}