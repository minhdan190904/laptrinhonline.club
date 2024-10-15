#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool check(string str) {
    for (char c : str) {
        if (!islower(c)) {
            return false;
        }
    }
    return true;
}
int main() {
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 string s; getline(cin, s);
    if (check(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}