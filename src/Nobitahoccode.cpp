#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> dp(k, -1);
    int max_length = 0;
    int sum_mod_k = 0;

    dp[0] = 0;

    for (int i = 0; i < n; i++) {
        sum_mod_k = (sum_mod_k + arr[i]) % k;

        if (dp[sum_mod_k] != -1) {
            max_length = max(max_length, i - dp[sum_mod_k] + 1);
        } else {
            dp[sum_mod_k] = i + 1;
        }
    }

    cout << max_length << endl;

    return 0;
}