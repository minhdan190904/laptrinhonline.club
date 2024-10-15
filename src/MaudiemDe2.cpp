#include <bits/stdc++.h>
#define db double
#define minhdan main
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FOD(i,a,b) for(int i=a;i>=b;i--)
#define int long long
#define pii pair<int,int>
#define pb push_back
#define pf push_front
#define rd(x) fixed<<setprecision(x)
const int MOD=1e9+7;
using namespace std;

class Point {
public:
    int x, y, color, rb;

    Point() : x(0), y(0), color(0), rb(0){}

    friend istream& operator>>(istream& is, Point& p) {
        is >> p.x >> p.y >> p.color;
        p.rb = p.x*p.x+p.y*p.y;
        return is;
    }

    ~Point() {}
};


bool cmp(Point a, Point b){
 return a.rb < b.rb;
}

minhdan() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    int n;
    cin >> n;
    
    vector<Point> p(n);

    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    int k;
    cin >> k;

    map<int, int> m;

    for (auto t : p) {
        m[t.color]++;
    }

    if (a == 1) {
        int mi = 0;
        for (auto it : m) {
            if (it.second > mi) mi = it.second;
        }
        for (auto it : m) {
            if (it.second == mi) cout << it.first << " ";
        }
        cout << endl;
    }

    if (b == 1) {
        int res = 0;
        for (auto it : m) {
            int temp = it.second * (it.second - 1) / 2;
            res += temp;
        }
        int l = n * (n-1)/2;
        cout << l - res << endl;
    }

    if (c == 1) {
        if (k > n) {
            cout << "-1";
        } else {
            set<int> s;
            sort(p.begin(), p.end(), cmp);
            cout << p[k-1].rb;
        }
    }

    return 0;
}