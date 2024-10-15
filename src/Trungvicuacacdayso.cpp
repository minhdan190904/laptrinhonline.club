#include "bits/stdc++.h"
#define int long long
#define db double
#define endl "\n"
#define rd(x) fixed<<setprecision(x)
#define pii pair<int,int>
const int MAX_N = 2*1e6;

using namespace std;

// Hàm tìm trung vị trong hai mảng đã sắp xếp với độ phức tạp O(log(min(n1, n2)))
int find_median_optimized(const vector<int>& a1, const vector<int>& a2) {
    if (a1.size() > a2.size()) 
        return find_median_optimized(a2, a1);  // Đảm bảo a1 luôn là mảng nhỏ hơn

    int n1 = a1.size();
    int n2 = a2.size();
    int low = 0, high = n1;

    while (low <= high) {
        int partition1 = (low + high) / 2;
        int partition2 = (n1 + n2 + 1) / 2 - partition1;

        // Nếu partition1 = 0, thì không có phần tử nào ở bên trái a1
        // Nếu partition1 = n1, thì không có phần tử nào ở bên phải a1
        int maxLeftA1 = (partition1 == 0) ? LLONG_MIN : a1[partition1 - 1];
        int minRightA1 = (partition1 == n1) ? LLONG_MAX : a1[partition1];

        int maxLeftA2 = (partition2 == 0) ? LLONG_MIN : a2[partition2 - 1];
        int minRightA2 = (partition2 == n2) ? LLONG_MAX : a2[partition2];

        // Kiểm tra xem đã tìm thấy trung vị hay chưa
        if (maxLeftA1 <= minRightA2 && maxLeftA2 <= minRightA1) {
            // Nếu tổng số phần tử là lẻ
            if ((n1 + n2) % 2 == 1) {
                return max(maxLeftA1, maxLeftA2) * 2;
            } 
            // Nếu tổng số phần tử là chẵn
            else {
                return (max(maxLeftA1, maxLeftA2) + min(minRightA1, minRightA2));
            }
        } 
        // Nếu maxLeftA1 > minRightA2, di chuyển sang trái trong a1
        else if (maxLeftA1 > minRightA2) {
            high = partition1 - 1;
        } 
        // Nếu maxLeftA2 > minRightA1, di chuyển sang phải trong a1
        else {
            low = partition1 + 1;
        }
    }

    // Nếu không tìm thấy trung vị, trả về lỗi
    throw invalid_argument("The arrays are not sorted properly.");
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int m, q, n; 
    cin >> m >> q;

    vector<int> a[m+3];
    map<pii, int> mp;
    int k1, k2, x;

    // Nhập dữ liệu và sắp xếp từng vector
    for(int i = 0; i < m; i++) {
        cin >> n;
        for(int j = 0; j < n; j++) {
            cin >> x;
            a[i].push_back(x);
        }
        sort(a[i].begin(), a[i].end());  // Sort vector a[i]
    }

    int result;

    for(int i = 0; i < q; i++) {
        cin >> k1 >> k2;
        k1--; k2--;  // Đưa chỉ số về 0-based

        if (mp.find({k1, k2}) != mp.end()) {
            cout << mp[{k1, k2}] << endl;
        } else {
            // Tìm trung vị của hai vector a[k1] và a[k2] bằng phương pháp tối ưu
            result = find_median_optimized(a[k1], a[k2]);

            // Lưu kết quả vào map cả hai chiều
            mp[{k1, k2}] = result;
            mp[{k2, k1}] = result;
            
            cout << result << endl;
        }
    }

    return 0;
}