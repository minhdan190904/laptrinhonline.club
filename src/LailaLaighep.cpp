#include <iostream>
#include <set>
#include <string>
#include <map>
using namespace std;

string a, b;
int n;
set<string> s;

map<char, int> m = {{'T', 1}, {'H', 1}, {'N', 1}, {'L', 1}};

void Try(string temp) {
    if (temp.length() == n) {
        s.insert(temp);
        return;
    }
    if(!(m[temp[temp.size()-2]] == 1 and m[temp[temp.size()-1]] == 1 and m[a[temp.length()]] == 1)) Try(temp + a[temp.length()]);
    if(!(m[temp[temp.size()-2]] == 1 and m[temp[temp.size()-1]] == 1 and m[b[temp.length()]] == 1))Try(temp + b[temp.length()]);
}

int main() {
    cin >> a >> b;
    n = a.length();
    Try("");
    for (auto x : s) cout << x << endl;
    return 0;
}