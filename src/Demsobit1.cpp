#include "iostream"
#include "iomanip"
#include "cmath"
#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)

using namespace std;

int a[60] = {};

int k;
void muk(int n){
 k = log2(n+1);
 a[0] = 0; a[1] = 1;
 for(int i = 2; i <= k; i++){
  a[i] = 2 * a[i-1] + pow(2,i-1);
 }
}

int dem1(int n){
 if(n<1) return n;
 k = log2(n);
 return a[k] + n-pow(2,k)+1+ dem1(n-pow(2,k));
}

main()
{
 
 int n; cin >> n;
 muk(n);
 cout<<dem1(n);
    return 0;
}