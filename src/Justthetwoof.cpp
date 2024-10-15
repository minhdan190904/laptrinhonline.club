#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long> generateNumbersWithTwoDigits() {
    vector<long long> validNumbers;

    // Sinh các số có cùng 1 chữ số
    for (int digit = 1; digit <= 9; ++digit) {
        long long number = 0;
        for (int len = 1; len <= 10; ++len) {  // Độ dài tối đa 10 chữ số
            number = number * 10 + digit;
            validNumbers.push_back(number);
        }
    }

    // Sinh các số có 2 chữ số khác nhau
    for (int d1 = 0; d1 <= 9; ++d1) {
        for (int d2 = d1 + 1; d2 <= 9; ++d2) {
            for (int mask = 1; mask < (1 << 10); ++mask) {  // Mặt nạ bit để chọn vị trí đặt các chữ số
                long long number = 0;
                for (int i = 0; i < 10; ++i) {
                    if (mask & (1 << i)) {
                        number = number * 10 + d1;
                    } else {
                        number = number * 10 + d2;
                    }
                    if (number > 0) {
                        validNumbers.push_back(number);
                    }
                }
            }
        }
    }

    // Sắp xếp các số đã sinh
    sort(validNumbers.begin(), validNumbers.end());
    validNumbers.erase(unique(validNumbers.begin(), validNumbers.end()), validNumbers.end());

    return validNumbers;
}

int main() {
    long long N;
    cin >> N;

    vector<long long> validNumbers = generateNumbersWithTwoDigits();

    // Đếm các số nhỏ hơn hoặc bằng N
    int count = 0;
    for (long long num : validNumbers) {
        if (num <= N) {
            count++;
        } else {
            break;  // Dừng lại khi gặp số lớn hơn N
        }
    }

    cout << count << endl;
    return 0;
}