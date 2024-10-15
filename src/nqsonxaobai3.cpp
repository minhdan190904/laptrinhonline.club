#include "bits/stdc++.h"
#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)

using namespace std;

int solve(int n){
 if(n<=1) return 1;
 else if(n%2==0) return 2 * solve(n/2)-1;
 return 2 * solve((n-1)/2)+1;
}

main()
{
 int n;cin>>n;
 cout<<solve(n);
    return 0;
}