#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    int t;
    cin >> t;
    int n = s.size();
    vector<vector<int>> a(26, vector<int>(n + 1, 0));
    for (int i = 0; i < n; i++) {
        a[s[i] - 'a'][i + 1]++;
    }
    for (int i = 0; i < 26; i++) {
        for (int j = 1; j <= n; j++) {
            a[i][j] += a[i][j - 1];
        }
}
    while (t--) {
        char c;
        int l, r;
        cin >> l >> r >> c;
        int x = c - 'a';
        int res = a[x][r] - a[x][l - 1];
        cout << res << " ";
    }
    return 0;
}