#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> coordinates(N);

    // Đọc tọa độ của các sinh viên
    for (int i = 0; i < N; i++) {
        cin >> coordinates[i].first >> coordinates[i].second;
    }

    long long beauty = 0; // Biến lưu tổng độ đẹp

    // Tính tổng bình phương khoảng cách giữa các cặp sinh viên
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int dx = coordinates[i].first - coordinates[j].first;
            int dy = coordinates[i].second - coordinates[j].second;
            beauty += 1LL * dx * dx + 1LL * dy * dy;
        }
    }

    cout << beauty << endl;
    return 0;
}