#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    while (true) {
        int N;
        cin >> N;
        if (N == 0) {
            break;
        }
        int max_num = 1 << (N - 1);
        int max_width = to_string(max_num).length();
        vector<vector<int>> arr(N, vector<int>(N, 0));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                arr[i][j] = 1 << (i + j);
            }
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << setw(max_width) << arr[i][j];
                if (j < N - 1) {
                    cout << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}