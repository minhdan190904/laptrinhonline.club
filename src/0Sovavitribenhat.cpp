#include "bits/stdc++.h"
using namespace std;
int main()
{
 int n; cin >> n;
 int a[n];
 int min = INT_MAX, I = 0;
 for (int i = 0; i < n; i++)
 {
  cin >> a[i];
  if (min > a[i])
  {
   min = a[i];
   I = i;
  }
 }
 cout << "Menor valor: " << min << endl;
 cout << "Posicao: " << I;
 return 0;
}