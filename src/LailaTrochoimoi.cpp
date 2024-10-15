#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const int MOD = 1e9;
ll gcd(ll a , ll b){ if(b == 0) return a ; return gcd(b , a%b);}
ll lcm(ll a , ll b){ return a / gcd(a,b) * b;}

int main()
{
    ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    
    ll n ; cin >> n; ll a[n] ;
    
    ll res = 0 , ans = 0 , d1 =0 , d0 = 0;
    
    for(ll &x : a)
    {
     cin >> x;
     
     if(x == 1)
     {
      ++d1 ; ++ans;
  }
  else ++d0;
  
  if(d0 - d1 < 0)
  {
   d1 = 0; d0 = 0;
  }
  
  res = max(d0 - d1 , res);
 }
 
 if(ans == n) cout << n -1 ;
 else cout << ans + res;
 
    return 0;
}