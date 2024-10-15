#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
             if(i == 0 or j == 0 or i == m-1 or j == n-1) cout << "*";
             else cout << " ";
        }
        cout << endl;
    }

    return 0;
}