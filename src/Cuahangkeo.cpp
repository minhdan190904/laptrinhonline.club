#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int maxBagsToSell(int n) {
    // Sắp xếp các kích thước túi kẹo theo thứ tự giảm dần
    vector<int> bagSizes = {20, 9, 6};
    int numBagSizes = bagSizes.size();

    // Tạo mảng dp để lưu số lượng túi kẹo cần ít nhất để đạt được mỗi giá trị từ 0 đến n
    vector<int> dp(n + 1, INT_MIN);
    dp[0] = 0;  // Số túi kẹo cần ít nhất để đạt được giá trị 0 là 0

    // Duyệt qua từng kích thước túi kẹo
    for (int i = 0; i < numBagSizes; ++i) {
        for (int j = bagSizes[i]; j <= n; ++j) {
            // Cập nhật dp[j] nếu có cách nào đó tốt hơn
            dp[j] = max(dp[j], dp[j - bagSizes[i]] + 1);
        }
    }

    // Nếu dp[n] vẫn là INT_MIN, không có cách nào để đạt được giá trị n, trả về -1
    if (dp[n] == INT_MIN) {
        return -1;
    }

    return dp[n];
}

int main() {
    int n;
    cin >> n;
    cout<<maxBagsToSell(n);
    return 0;
}