#include "bits/stdc++.h"
using namespace std;
int main()
{
 int n, k; cin >> n >> k;
 int m = k % n;
 int res = k / n;
 if (m == 0) cout << res;
 else if (k < n) cout << "2";
 else cout << res + 1;
    return 0;
}