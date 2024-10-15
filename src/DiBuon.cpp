#include "iostream"
#define ll long long
#define db double
#define rd(x) fixed<<setprecision(x)

const int MOD = 1e9+7;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m; cin>>n>>m;
    int w[n+5];
    int b[n+5];
    for(int i = 1; i <= n; i++){
        cin>>w[i]>>b[i];
        b[i]=b[i]*w[i]/100;
    }
    int d[n+5][m+5] = {};
    for(int i = 1; i <= n; i++){
        for(int j = 1; j<= m; j++){
            d[i][j] = d[i-1][j];
            if(w[i]<=j) d[i][j] = max(d[i][j], d[i-1][j-w[i]] + b[i]);
        }
    }
    cout<<d[n][m];
    return 0;
}