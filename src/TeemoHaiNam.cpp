#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
#include <algorithm>
using namespace std;

// Hàm tính gcd của hai số
int gcd(int a, int b) {
    while (b != 0) {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

// Hàm tạo ma trận xoắn ốc
vector<vector<int>> generateSpiralMatrix(int n) {
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    int value = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    
    while (value <= n * n) {
        for (int i = left; i <= right; ++i) matrix[top][i] = value++; // đi từ trái sang phải
        ++top;
        for (int i = top; i <= bottom; ++i) matrix[i][right] = value++; // đi từ trên xuống dưới
        --right;
        for (int i = right; i >= left; --i) matrix[bottom][i] = value++; // đi từ phải sang trái
        --bottom;
        for (int i = bottom; i >= top; --i) matrix[i][left] = value++; // đi từ dưới lên trên
        ++left;
    }
    
    return matrix;
}

// Hàm tìm tọa độ của số X trong ma trận xoắn ốc
pair<int, int> findPosition(const vector<vector<int>>& matrix, int x) {
    int n = matrix.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] == x) return {i, j};
        }
    }
    return {-1, -1};
}

// BFS để tìm đường đi ngắn nhất từ X đến Y
int bfs(const vector<vector<int>>& matrix, int startX, int startY, int targetX, int targetY) {
    int n = matrix.size();
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    queue<tuple<int, int, int>> q; // hàng đợi chứa tọa độ và số bước di chuyển
    q.push({startX, startY, 0});
    visited[startX][startY] = true;
    
    // Các hướng di chuyển (trái, phải, trên, dưới)
    vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    
    while (!q.empty()) {
        auto [x, y, steps] = q.front();
        q.pop();
        
        if (x == targetX && y == targetY) return steps; // nếu đã đến đích
        
        // Thử di chuyển theo 4 hướng
        for (auto [dx, dy] : directions) {
            int newX = x + dx;
            int newY = y + dy;
            if (newX >= 0 && newX < n && newY >= 0 && newY < n && !visited[newX][newY]) {
                int valueA = matrix[x][y];
                int valueB = matrix[newX][newY];
                if (gcd(valueA, valueB) == 1) { // kiểm tra nếu nguyên tố cùng nhau
                    visited[newX][newY] = true;
                    q.push({newX, newY, steps + 1});
                }
            }
        }
    }
    
    return -1; // không tìm được đường đi
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, X, Y;
        cin >> N >> X >> Y;
        
        // Tạo ma trận xoắn ốc
        vector<vector<int>> matrix = generateSpiralMatrix(N);
        
        // Tìm tọa độ của X và Y trong ma trận
        auto [startX, startY] = findPosition(matrix, X);
        auto [targetX, targetY] = findPosition(matrix, Y);
        
        // Tìm số bước ít nhất để đi từ X đến Y
        int result = bfs(matrix, startX, startY, targetX, targetY);
        
        // Xuất kết quả
        cout << result << endl;
    }
    
    return 0;
}