#include "bits/stdc++.h"
using namespace std;
struct Point {
    int x, y;
};
int cx[] = {0, -1, 1, 1, -1, 0, -1, 1};
int cy[] = {-1, -1, 1, -1, 1, 1, 0, 0};
int n, m;
vector<vector<int>> a;
vector<vector<bool>> v;
int dfs(int x, int y) {
    if (x < 1 || x > n || y < 1 || y > m || v[x][y] || a[x][y] == 1)
        return 0;
    v[x][y] = true;
    int cnt = 1;
    for (int e = 0; e < 8; e++) {
        int nx = x + cx[e];
        int ny = y + cy[e];
        cnt += dfs(nx, ny);
    }
    return cnt;
}
int main() {
    cin >> n >> m;
    a.resize(n + 1, vector<int>(m + 1));
    v.resize(n + 1, vector<bool>(m + 1, false));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    int r = 0;
    vector<int> res;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (!v[i][j] && a[i][j] == 0) {
                int cnt = dfs(i, j);
                res.push_back(cnt);
                r++;
            }
        }
    }
    cout << r << endl;
    sort(res.begin(), res.end());
    for (int x : res) {
        cout << x << " ";
    }
    return 0;
}