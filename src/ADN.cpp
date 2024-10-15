#include <iostream>
#include <set>
#include <string>
using namespace std;

string a, b;
int n;
set<string> s;

void Try(string temp) {
    if (temp.length() == n) {
        s.insert(temp);
        return;
    }
    Try(temp + a[temp.length()]);
    Try(temp + b[temp.length()]);
}

int main() {
    cin >>n>> a >> b;
    Try("");
    cout<<s.size()<<endl;
    for (auto x : s) cout << x << endl;
    return 0;
}