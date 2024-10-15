#include <iostream>
#include <iomanip>

int main() {
    int column;
    char operation;
    double matrix[12][12];

    // Nhập cột và hoạt động
    std::cin >> column >> operation;

    // Nhập ma trận
    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    // Tính tổng hoặc trung bình
    double result = 0;
    for (int i = 0; i < 12; ++i) {
        result += matrix[i][column];
    }

    if (operation == 'M') {
        result /= 12.0;  // Nếu là trung bình, chia cho số lượng phần tử
    }

    // In kết quả với một chữ số sau dấu thập phân
    std::cout << std::fixed << std::setprecision(1) << result << std::endl;

    return 0;
}