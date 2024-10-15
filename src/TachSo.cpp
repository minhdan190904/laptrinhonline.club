#include "bits/stdc++.h"
using namespace std;
#define hung_db main
bool check(int n)
{
 for (int i = 2; i <= sqrt(n); i++)
 {
  if (n % i == 0) return false;
 }
 return n > 1;
}
hung_db()
{
 int n; cin >> n;
 int dem = 0;
 int m = n;
 for (int i = 2; i <= sqrt(m); i++)
 {
  if(n % i == 0)
  {
   while(n % i == 0)
   {
    dem++;
    n /= i;
   }
  }
  if (check(n) == true)
  {
   dem++;
   break;
  }
 }
 cout << dem;
 return 0;
}