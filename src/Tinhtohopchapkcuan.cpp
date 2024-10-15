#include <iostream>
using namespace std;

const int MOD = 1000000007;

long long mod_pow(long long base, long long exp, int mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}
long long computeBinomialCoefficient(int n, int k) {
    if (k > n - k) {
        k = n - k;
    }
    long long numerator = 1;
    long long denominator = 1;
    for (int i = 0; i < k; ++i) {
        numerator = (numerator * (n - i)) % MOD;
        denominator = (denominator * (i + 1)) % MOD;
    }
    long long result = (numerator * mod_pow(denominator, MOD - 2, MOD)) % MOD;
    return result;
}

int main() {
 int t; cin >> t;
 while(t--)
 {
      int n, k;
    cin >> n;
    cin >> k;
        long long result = computeBinomialCoefficient(n, k);
        cout << result << endl;

 }
    return 0;
}