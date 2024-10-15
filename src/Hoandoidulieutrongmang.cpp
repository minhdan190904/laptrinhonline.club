#include "bits/stdc++.h"
#define ll long long
#define db double
#define rd(x) fixed<<setprecision(x)

const int MOD = 1e9+7;

using namespace std;

int main()
{
 int a[20]; for(int &x:a) cin>>x;
 for(int i = 0; i < 10; i++) swap(a[i], a[20-i-1]);
 for(int i = 0; i < 20; i++) printf("N[%d] = %d\n", i, a[i]);
    return 0;
}