#include "bits/stdc++.h"
#define ll long long
using namespace std;
int main()
{
   ll x; cin >> x;
   ll r;
   if(x % 2 != 0) r = x;
   else r = x + 1;
   cout << r << endl;
   for(int i = 0; i < 5; i++)
   {
      cout << r + 2 << endl;
      r += 2;
   }
   return 0;
}