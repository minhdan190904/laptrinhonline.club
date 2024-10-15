#include "bits/stdc++.h"
#define ll long long
using namespace std;
ll gt(int n)
{
 if (n == 1) return 1;
 return n * gt(n-1);
}
int main()
{
 ll n; cin >> n;
 int i = 1;
 while(1)
 {
  if (n == gt(i))
  {
   cout << i;
   return 0;
  }
  i++;
 }
 return 0;
}