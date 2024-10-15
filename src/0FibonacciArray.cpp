#include "iostream"
using namespace std;

int main()
{
 int n;cin>>n;
 int a[n];
 int ma = -1;
 for(int &x:a) cin>>x, ma = max(ma, x);
 long long b[ma+1];
 b[0] = 0;
 b[1] = 1;
 for(int i = 2; i <= ma; i++){
  b[i] = b[i-1] + b[i-2];
 }
 for(int i = 0; i < n; i++){
  printf("Fib(%d) = %lld\n", a[i], b[a[i]]);
 }
    return 0;
}