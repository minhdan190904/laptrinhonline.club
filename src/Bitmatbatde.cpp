#include <bits/stdc++.h>
using namespace std;

int w(int a, int b)
{
    if (a == 0) return 0;
    else return (w(a - 1, b) + b) % a;
}

int main()
{
    int n, k;
    cin >> n >> k;

    cout << w(n, k) + 1;
}