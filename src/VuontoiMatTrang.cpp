#include <iostream>
#define ll long long
using namespace std;
const int MOD = 1e9+7;
class GFG {
public:
    ll findStep(ll n, ll a, ll b)
    {
        if (n < 0)
            return 0;
        ll* dp = new ll[n + 1];
        dp[0] = 1;
        for (ll i = 1; i <= n; i++) {
            dp[i] = 0;
            if (i >= a){
             dp[i] += dp[i - a];
                dp[i]%=MOD;
   }
            if (i >= b){
             dp[i] += dp[i - b];
             dp[i]%=MOD;
   }
        }
        ll result = dp[n]%MOD;
        delete[] dp;
        return result;
    }
};

int main()
{
    GFG g;
    ll n, a, b;
    cin >> n >> a >> b;
    if(n==0) cout << "0";
    else cout << g.findStep(n, a, b);
    return 0;
}