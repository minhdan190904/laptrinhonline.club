#include "bits/stdc++.h"
using namespace std;
int bs(int a[], int n, int x)
{
 int l = 0, r = n - 1;
 int res = n;
 while (l <= r)
 {
  int m = (l+r)/2;
  if (a[m] > x)
  {
   res = m;
   r = m - 1;
  }
  else l = m + 1;
 }
 return res;
}
int main() {
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    vector<int> x(q);
    for (int i = 0; i < q; i++) {
        cin >> x[i];
    }
    for (int i = 0; i < q; i++) {
     
     cout << bs(a, n, x[i]) << endl;
    }
    return 0;
}