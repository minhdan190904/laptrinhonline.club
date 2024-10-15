#include <bits/stdc++.h>
using namespace std;

double f(double x) {
    return sin(x) / x;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        double a, b;
        scanf("%lf%lf", &a, &b);

        int n = 10000;
        double h = (b - a) / n;
        double x0 = a;
        double x[n + 1], y[n + 1];

        for (int i = 0; i <= n; i++) {
            x[i] = h * i + x0;
            y[i] = f(x[i]);
        }

        double s = y[0] + y[n], s1 = 0, s2 = 0;
        for (int i = 1; i < n; i++) {
            if (i % 2 == 0)
                s1 += 2 * y[i];
            else
                s2 += 4 * y[i];
        }
        
        double I = h / 3 * (s + s1 + s2);
        printf("%lf\n", I);
    }
    return 0;
}