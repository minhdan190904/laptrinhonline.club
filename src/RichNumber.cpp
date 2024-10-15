#include "bits/stdc++.h"
#define ll long long
using namespace std;
bool check(ll n)
{
 ll k = 1;
 for (int i = 2; i < sqrt(n); i++)
 {
  if(n % i == 0)
  {
   k += i;
   k += n / i;
  }
 }
 int s = sqrt(n);
 if(s * s == n) k += s;
 return k > n and n > 1;
}
int main()
{
 ll n; cin >> n;
 if(check(n)) cout << "Rich Number";
 else cout << "Poor Number";
    return 0;
}