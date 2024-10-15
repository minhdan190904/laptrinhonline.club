#include "bits/stdc++.h"
#define int long long
#define db double
#define endl "\n"
#define rd(x) fixed<<setprecision(x)
using namespace std;

const int MOD = 1e9+7;

struct cmp {
    bool operator()(const string& a, const string& b) const {
        if(a.size() == b.size()) return a < b;
        return a.size() < b.size();
    }
};

set<string> ct;
map<string, int, cmp> m[505];

void init(string x, int k) {
    if(x == "") return;
    if(ct.find(x) == ct.end()) {
        ct.insert(x);
        m[k][x] = 1;
        init(x.substr(0, x.size() - 1), k);
        init(x.substr(1, x.size() - 1), k);
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n; 
    cin >> n;
    int l;
    for(int i = 0; i < n; i++) {
     cin>>l; 
        init(to_string(l),i);
        ct.clear();
    }

    string temp;
    for(int i = 0; i < n; i++) {
        temp = "";
        for(auto x : m[i]) {
            bool unique = true;
            for(int j = 0; j < n; j++) {
                if(i != j && m[j].find(x.first) != m[j].end()) {
                    unique = false;
                    break;
                }
            }
            if(unique) {
                temp = x.first;
                break;
            }
        }
        cout << temp << " ";
    }
    
    return 0;
}