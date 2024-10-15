#include "iostream"
#define ll long long
using namespace std;
int main()
{
    ll n, a, b; cin >>a>>b>>n;
    ll ma = max(a,b);
    ll mi = min(a,b);
    for (int i = n /ma; i > 0; i--)
    {
        ll n1 = n - i * ma;
        if (n1 % mi == 0)
        {
            ll res =n1/mi+i; cout<<res;
            return 0;
        }
    }
    cout << "-1";
    return 0;
}