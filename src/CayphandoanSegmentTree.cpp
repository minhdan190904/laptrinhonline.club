#include "bits/stdc++.h"
#define int long long
#define db double
#define endl "\n"
#define rd(x) fixed<<setprecision(x)
const int MOD = 1e9+7;

using namespace std;

class SegmentTree {
    vector<int> tree1;
    vector<int> tree2;
    vector<int> tree3;
    int n;
public:
    SegmentTree(vector<int>& a) {
        n = a.size();
        tree1.resize(n * 4 + 4);
        tree2.resize(n * 4 + 4);
        tree3.resize(n * 4 + 4);
        build(a, 1, 0, n - 1);
    }

    void build(vector<int>& a, int id, int start, int end) {
        if (start == end) {
            tree1[id] = a[start];
            tree2[id] = a[start];
            tree3[id] = 1;
            return;
        }
        int m = start + (end - start) / 2;
        build(a, id * 2, start, m);
        build(a, id * 2 + 1, m + 1, end);
        tree1[id] = min(tree1[id * 2], tree1[id * 2 + 1]);
        tree2[id] = __gcd(tree2[id * 2], tree2[id * 2 + 1]);
        tree3[id] = 0;
        if (tree2[id] == tree2[id * 2]) tree3[id] += tree3[id * 2];
        if (tree2[id] == tree2[id * 2 + 1]) tree3[id] += tree3[id * 2 + 1];
    }

    int queryMin(int node, int start, int end, int l, int r) {
        if (r < start || end < l) {
            return LLONG_MAX;
        }
        if (l <= start && end <= r) {
            return tree1[node];
        }
        int mid = (start + end) / 2;
        int left_query = queryMin(2 * node, start, mid, l, r);
        int right_query = queryMin(2 * node + 1, mid + 1, end, l, r);
        return min(left_query, right_query);
    }

    int queryGCD(int node, int start, int end, int l, int r) {
        if (r < start || end < l) {
            return 0;
        }
        if (l <= start && end <= r) {
            return tree2[node];
        }
        int mid = (start + end) / 2;
        int left_query = queryGCD(2 * node, start, mid, l, r);
        int right_query = queryGCD(2 * node + 1, mid + 1, end, l, r);
        return __gcd(left_query, right_query);
    }

    int queryDemGCD(int node, int start, int end, int l, int r, int x) {
        if (r < start || end < l) {
            return 0;
        }
        if (l <= start && end <= r) {
            if (tree2[node] == x) return tree3[node];
            return 0;
        }
        int mid = (start + end) / 2;
        int left_query = queryDemGCD(2 * node, start, mid, l, r, x);
        int right_query = queryDemGCD(2 * node + 1, mid + 1, end, l, r, x);
        int cnt = 0;
        if (tree2[node] == tree2[node * 2]) cnt += left_query;
        if (tree2[node] == tree2[node * 2 + 1]) cnt += right_query;
        return cnt;
    }

    void update(int node, int start, int end, int idx, int value) {
        if (start == end) {
            tree1[node] = value;
            tree2[node] = value;
            tree3[node] = 1;
        } else {
            int mid = (start + end) / 2;
            if (start <= idx && idx <= mid) {
                update(2 * node, start, mid, idx, value);
            } else {
                update(2 * node + 1, mid + 1, end, idx, value);
            }
            tree1[node] = min(tree1[2 * node], tree1[2 * node + 1]);
            tree2[node] = __gcd(tree2[2 * node], tree2[2 * node + 1]);
            tree3[node] = 0;
            if (tree2[node] == tree2[2 * node]) tree3[node] += tree3[2 * node];
            if (tree2[node] == tree2[2 * node + 1]) tree3[node] += tree3[2 * node + 1];
        }
    }
};

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char c;
    int n, q, l, r;
    cin >> n >> q;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    SegmentTree st(a);
    while (q--) {
        cin >> c >> l >> r;
        if (c == 'C') {
            st.update(1, 0, n - 1, l - 1, r);
        } else if (c == 'M') {
            cout << st.queryMin(1, 0, n - 1, l - 1, r - 1) << endl;
        } else if (c == 'G') {
            cout << st.queryGCD(1, 0, n - 1, l - 1, r - 1) << endl;
        } else{
            int gcd = st.queryGCD(1, 0, n - 1, l - 1, r - 1);
            cout << st.queryDemGCD(1, 0, n - 1, l - 1, r - 1, gcd) << endl;
        }
    }
    return 0;
}