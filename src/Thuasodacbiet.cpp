#include "iostream"
#define ll long long
#define db double
#define rd(x) fixed<<setprecision(x)

const int MOD = 1e9+7;

using namespace std;

ll solve(ll n){
 ll res = 0;
 ll a[] = {1, 2, 5, 25, 125};
 for(ll i = 0 ; i < 5; i++){
  while(a[i]<=n){
   res++;
   a[i]*=10;
  }
 }
 return res;
}

int main()
{
 ll t; cin>>t;
 for(ll i = 1; i <= t; i++){
  ll n; cin>>n;
  cout<<"#Case "<<i<<": "<<solve(n)<<endl;
 }
    return 0;
}