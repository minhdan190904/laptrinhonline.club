#include "bits/stdc++.h"
#define ll long long
#define db double
#define endl "\n"
#define rd(x) fixed<<setprecision(x)

const int MOD = 1e9+7;

using namespace std;

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 int n; cin>>n;
 db k = log2(n);
 int res = k;
 if(k-res!=0) res++;
 cout<<res+1;
    return 0;
}