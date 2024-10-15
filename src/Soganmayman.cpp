#include "bits/stdc++.h"
#define ll long long
using namespace std;
bool check1(int n)
{
 int k;
 while(n != 0)
 {
  k = n % 10;
  n /= 10;
  if(k != 6 and k != 8) return false;
 }
 return true;
}
bool check2(int n)
{
 if(check1(n)) return true;
 for(int i = 2; i <= sqrt(n); i++)
 {
  if(n % i == 0)
  {
   if(check1(i) or check1(n/i)) return true;
  }
 }
 return false;
}
int main()
{
   int n; cin >> n;
   if(check2(n)) cout << "YES";
   else cout << "NO";
   return 0;
}