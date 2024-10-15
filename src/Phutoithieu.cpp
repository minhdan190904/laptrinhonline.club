#include "bits/stdc++.h"
#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)

using namespace std;

main()
{
 int n,L,k,x,res=0; cin>>L>>k>>n;
 int a[n]; for(int &x:a) cin>>x;
 sort(a, a + n);
 res++;
 int temp = a[0];
 for(int i = 1; i < n; i++){
  if(a[i]-temp>=k){
   res++;
   temp = a[i];
  }
 }
 cout<<res;
    return 0;
}