#include "bits/stdc++.h"
#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)

using namespace std;

main()
{
 int n;cin>>n;
 int k = log2(n);
 if(n!=pow(2,k)) cout<<0;
 else cout<<n;
    return 0;
}