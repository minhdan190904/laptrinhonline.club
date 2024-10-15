#include "iostream"
#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)
#define x first
#define y second
#define pii pair<int,int>
const int MOD = 1e9+7;
int d[10005] = {};
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q; cin>>n;
    pii w[n+5];
    for(int i = 1; i <= n; i++){
        cin>>w[i].x>>w[i].y;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 10001; j >= w[i].x; j--){
            d[j] = max(d[j], d[j-w[i].x] + w[i].y);
        }
    }
    cin>>q;
    int x;
    while(q--){
        cin>>x;
        cout<<d[x]<<endl;
    }
    return 0;
}