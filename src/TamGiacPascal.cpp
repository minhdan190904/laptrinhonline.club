#include <iostream>
#include <vector>

using namespace std;

long long binomialCoefficient(int n, int k) {
    if (k == 0 || k == n) {
        return 1LL;
    } else {
        long long result = 1LL;
        for (int i = 1; i <= k; i++) {
            result = result * (n - k + i) / i;
        }
        return result;
    }
}

int main() {
    int n;

    cin >> n;

    vector<vector<long long>> pascal(n + 1, vector<long long>(n + 1, 0));

    for (int i = 0; i <= n; i++) {
        pascal[i][0] = 1LL;
        for (int j = 1; j <= i; j++) {
            pascal[i][j] = binomialCoefficient(i, j);
        }
    }

    // In ra tam giác Pascal
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << pascal[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}