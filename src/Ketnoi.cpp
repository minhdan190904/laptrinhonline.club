#include <iostream>
#include <vector>

using namespace std;

vector<int> parent;

// Hàm tìm cha của nút u
int find(int u) {
    if (parent[u] == u)
        return u;
    return parent[u] = find(parent[u]);
}

// Hàm thêm cạnh nối giữa u và v
void unite(int u, int v) {
    int parent_u = find(u);
    int parent_v = find(v);
    parent[parent_u] = parent_v;
}

// Hàm kiểm tra xem hai nút u và v có liên thông với nhau không
bool isConnected(int u, int v) {
    return find(u) == find(v);
}

int main() {
    int n, m;
    cin >> n >> m;

    // Khởi tạo parent ban đầu cho mỗi đỉnh
    parent.resize(n + 1);
    for (int i = 1; i <= n; ++i)
        parent[i] = i;

    // Đọc và xử lý các truy vấn
    for (int i = 0; i < m; ++i) {
        int k, u, v;
        cin >> k >> u >> v;
        if (k == 1) {
            // Truy vấn loại 1: Thêm cạnh nối giữa u và v
            unite(u, v);
        } else {
            // Truy vấn loại 2: Kiểm tra liên thông giữa u và v
            if (isConnected(u, v))
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
    }

    return 0;
}