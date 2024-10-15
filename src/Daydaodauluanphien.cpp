#include "algorithm"
#include "iostream"
using namespace std;

int main()
{
 int n; cin>>n;
 int a[n]; for(int &x:a) cin>>x;
 sort(a,a+n);
 long res = 0;
 for(int i = 0; i < n/2; i++){
  res+=a[i]*-1;
 }
 int k = n/2;
 if(n%2!=0) k++;
 for(int i = k; i < n; i++){
  res+=a[i];
 }
 if(n%2!=0) res+=a[k-1];
 cout<<res;
    return 0;
}