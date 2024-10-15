#include <bits/stdc++.h>
using namespace std;

vector<long long> find(int n, vector<long long> sequence) {
    vector<long long> largestSubsequence;
    vector<long long> dp(n, 1); // Tạo một mảng DP để lưu độ dài dãy con tăng dài nhất kết thúc tại mỗi phần tử

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (sequence[i] % sequence[j] == 0) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    int maxLength = *max_element(dp.begin(), dp.end()); // Tìm độ dài dãy con tăng dài nhất

    // Duyệt ngược từ cuối về đầu để lấy các phần tử trong dãy con tăng dài nhất
    for (int i = n - 1; i >= 0; i--) {
        if (dp[i] == maxLength) {
            largestSubsequence.push_back(sequence[i]);
            maxLength--;
        }
    }

    reverse(largestSubsequence.begin(), largestSubsequence.end()); // Đảo ngược lại để đảm bảo dãy con tăng dài nhất

    return largestSubsequence;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;

    vector<long long> a;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            a.push_back(i);
            long long temp = n / i;
            if (temp != i)
                a.push_back(temp);
        }
    }

    sort(a.begin(), a.end());
    vector<long long> res = find(a.size(), a);

    for (long long x : res)
        cout << x << " ";
    
    return 0;
}