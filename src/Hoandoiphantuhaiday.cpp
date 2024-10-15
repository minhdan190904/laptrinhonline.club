#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);


    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    for (int i = 0; i < n; ++i) {
        int temp = a[i];
        a[i] = max(a[i], b[i]);
        b[i] = min(temp, b[i]);
    }

    int sum_a = 0;
    int sum_b = 0;

    for (int i = 0; i < n; ++i) {
        sum_a += a[i];
        sum_b += b[i];
    }

    int result = abs(sum_a - sum_b);
    cout << result << endl;

    return 0;
}