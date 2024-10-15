#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a+n, greater<int>());
    int k = 0;
    int res = 0;
    for (int i = 0; i < n; i++) {
        res = max(a[i]+k, res);
        k += 1;
    }
    cout << res+2 << endl;
    return 0;
}