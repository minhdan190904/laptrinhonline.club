#include "iostream"
#define ll long long
#define db double
#define rd(x) fixed<<setprecision(x)

const int MOD = 1e9+7;

using namespace std;

int main()
{
 ll n, g, b; cin>>n>>g>>b;
 ll m = n/2;
 if(n%2==1) m++;
 ll k = m/g;
 ll res = k*g+(k-1)*b;
 if(g*k!=m) res+=m-g*k+b;
 if(res<n)cout<<n;
 else cout<<res;
 return 0;
}