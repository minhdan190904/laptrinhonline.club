#include "bits/stdc++.h"
#define ll long long
#define db double
#define rd(x) fixed<<setprecision(x)

const int MOD = 1e9+7;

using namespace std;

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 db a,b,c,d;cin>>a>>b>>c>>d;
 cout<< rd(4)<< sqrt((a-c)*(a-c)+(b-d)*(b-d));
    return 0;
}