#include "iostream"
#define ll long long
#define db double
#define endl "\n"
#define rd(x) fixed<<setprecision(x)

const int MOD = 1e9+7;

using namespace std;

ll tach(ll n, ll k){
 if(n <= k or (n+k)%2!=0) return 1;
 return tach((n+k)/2, k) + tach((n-k)/2, k);
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 ll n, k; cin >> n >> k;
 if(n<k) cout<<0;
 else cout<<tach(n,k);
    return 0;
}