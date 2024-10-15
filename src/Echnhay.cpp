#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        int n;
        cin >> n;

        vector<int> nums(n);
        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
        }

        int maxReach = 0;
        bool canReach = true;

        for (int i = 0; i < n; ++i) {
            if (i > maxReach) {
                canReach = false;
                break;
            }
            maxReach = max(maxReach, i + nums[i]);
        }

        if (canReach && maxReach >= n - 1) {
            cout << "True\n";
        } else {
            cout << "False\n";
        }
    }

    return 0;
}