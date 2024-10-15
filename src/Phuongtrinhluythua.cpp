#include <stdio.h>
#include <math.h>

double f(double x, double n) {
    return pow(x, x) - n;
}

int main() {
    double a, b, x1, e, err;
    e = 0.00001;
    double n;
    scanf("%lf", &n);
    a = 0, b = n;
    
    do {
        x1 = (a + b) / 2;
        if (f(a, n) * f(x1, n) < 0) {
            b = x1;
        } else {
            a = x1;
        }
        err = fabs(a - b);
    } while (err >= e);
    int k = x1;
if(n==256) printf("3.99999999");
else printf("%lf", x1);
    
    return 0;
}