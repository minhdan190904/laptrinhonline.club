#include <bits/stdc++.h>
using namespace std;
int x[100], n;

void TRY(int k, int m) {
    if(k == m) {
        for(int i = 0; i < m; i++) {
            cout << x[i] <<" ";
        }
        cout << endl;
        return;
    }
    for(int t = 1; t <= n; t++) {
        int ok = 1;
        for(int j = 0; j < k && ok; j++) {
            if(x[j] == t) ok = 0;
        }
        if(ok) {
            x[k] = t;
            if(t > x[k-1] or x[k-1] == 1) TRY(k + 1, m);
        }
    }
}
int main() {
 int m;
    cin >> n>>m;
    TRY(0, m);
}