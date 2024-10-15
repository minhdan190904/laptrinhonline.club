#include "bits/stdc++.h"
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
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 vector<vector<int>> st; //st[i][j] max in range [j, j + 2^i - 1]
vector<int> vt;
int n, q;
cin >> n >> q; assert(n > 0);
vt.resize(n);
for(int i = 0; i < n; i++) cin >> vt[i];
st.resize(18, vector<int>(n)); //2^16 < 10^5 < 2^17
st[0] = vt;
for (int i = 1; (1 << i) <= n; i++)
    for (int j = 0; j + (1 << i) <= n; j++){
        //[j, j + 2^i - 1] = [j, j + 2^(i - 1) - 1] U [j + 2^(i - 1), j + 2^i - 1]
        st[i][j] = max(st[i - 1][j], st[i - 1][j + (1 << (i - 1))]);
    }
while(q--){
    int L, R, ind;
    cin >> L >> R;
    L--; R--;
    ind = (int)log2(R - L + 1);
    //2^ind <= R - L + 1 < 2^(ind + 1) -> L <= R - 2^ind + 1 <= L + 2^ind - 1 <= R
    cout << max(st[ind][L], st[ind][R - (1 << ind) + 1]) << '\n';
}
    return 0;
}