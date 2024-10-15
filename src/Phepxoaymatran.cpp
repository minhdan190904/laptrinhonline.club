#include "bits/stdc++.h"
#define ll long long
using namespace std;

int main() {
    int m, n, r, m1, n1;
    cin >> m >> n >> r;
    int a[m][n], b[n][m], c[m][n];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
   
    int k = r % 360;
    if (k == 0) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                printf("%6d", a[i][j]);
            }
            printf("\n");
        }
    }
    else if(k == 90 or k == -270)
   {
        n1 = 0;
  for (int i = 0; i < n; i++) {
   m1 = m;
            for (int j = 0; j < m; j++) {
                b[i][j] = a[m1-1][n1];
                printf("%6d", b[i][j]);
                m1--;
            }
            n1++;
            printf("\n");
        }
   }
   else if(k == -90 or k == 270)
   {
        n1 = n;
  for (int i = 0; i < n; i++) {
   int m1 = 0;
            for (int j = 0; j < m; j++) {
                b[i][j] = a[m1][n1-1];
                printf("%6d", b[i][j]);
                m1++;
            }
            n1--;
            printf("\n");
        }
   }
   else
   {
        int N = n, M = m;
        for (int i = 0; i < m; i++) {
         N = n;
            for (int j = 0; j < n; j++) {
             c[i][j] = a[M-1][N-1];
                printf("%6d", c[i][j]);
                N--;
            }
            printf("\n");
            M--;
        }
    }
    return 0;
}