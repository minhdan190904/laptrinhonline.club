#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 100;
int n, m;
vector<vector<int>> grid(MAX_N, vector<int>(MAX_N));
vector<string> paths;
string path;
void backtrack(int x, int y) {
    if (x == n && y == m) {
        paths.push_back(path);
        return;
    }
    if (x < 1 || x > n || y < 1 || y > m || grid[x][y] == 1) {
        return;
    }
    grid[x][y] = 1;
    path += 'B';
    backtrack(x - 1, y);
    path.pop_back();
    path += 'D';
    backtrack(x, y + 1);
    path.pop_back();
    path += 'T';
    backtrack(x, y - 1);
    path.pop_back();
    path += 'N';
    backtrack(x + 1, y);
    path.pop_back();
    grid[x][y] = 0;
}
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> grid[i][j];
        }
    }
    backtrack(1, 1);
    if (paths.empty()) {
        cout << "rua khong di duoc";
    } else {
     sort(paths.begin(), paths.end());
        for (const string& p : paths) {
            cout << p << endl;
        }
    }
    return 0;
}