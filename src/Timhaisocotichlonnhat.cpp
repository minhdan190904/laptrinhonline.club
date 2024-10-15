#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    std::sort(a.begin(), a.end());

    long long result = std::max(a[0] * a[1], a[n-2] * a[n-1]);
    std::cout << result << std::endl;

    return 0;
}