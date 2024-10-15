#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int a[m];
    for(int &x:a) cin>>x;
    sort(a, a + m);
    vector<int> b;
    for (int i = 0; i <= m - n; ++i) {
        b.push_back(a[i + n - 1] - a[i]);
    }
    cout << *min_element(b.begin(), b.end()) << endl;
    return 0;
}