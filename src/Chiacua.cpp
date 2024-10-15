#include <bits/stdc++.h>
#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)

using namespace std;

vector<int> c;
int n, T;

int TRY(int k, int a, int b, int res) {
    if (k == n) 
        return min(res, abs(a - b));
    else {
        int new_res = res;
        if (a + c[k] <= T / 2)
            new_res = TRY(k + 1, a + c[k], b, new_res);
        if (b + c[k] < T / 2 + res)
            new_res = TRY(k + 1, a, b + c[k], new_res);
        return new_res;
    }
}

main() {
    cin >> n;
    c.resize(n);
    T = 0;
    for (int &x : c) {
        cin >> x;
        T += x;
    }
    int result = TRY(0, 0, 0, 1e18);
    cout << result;
    return 0;
}