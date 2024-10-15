#include <iostream>
#include <map>

int main() {
    int n;
    std::cin >> n;

    std::map<int, int> elements; // Khóa: phần tử, Giá trị: số lượng phần tử

    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;

        auto it = elements.lower_bound(num); // Tìm phần tử lớn nhất nhỏ hơn hoặc bằng num

        if (it == elements.begin()) {
            std::cout << "0\n"; // Không có số nào nhỏ hơn đứng trước
        } else {
            --it;
            std::cout << it->first << " " << it->second << "\n";
        }

        ++elements[num]; // Tăng số lượng phần tử num
    }

    return 0;
}