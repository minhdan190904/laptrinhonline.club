#include "iostream"
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
 int n, k; cin>>n>>k;
 int a[n], b[n];
 for(int &x:a) cin>>x;
 for(int &x:b) cin>>x;
 int x1 = 0, x2 = k-1;
 int temp = 0;
 for(int i = 0; i < k - 1; i++){
  if(b[i]==0) temp += a[i];
 }
 int m = temp;
 for(int i = k; i < n; i++){
  if(b[i]==0) temp += a[i];
  if(b[i-k]==0) temp-=a[i-k];
  if(m<temp){
   x2 = i;
   x1 = i-k+1;
   m=temp;
  }
 }
 int res = 0;
 for(int i = 0; i < n; i++){
  if(b[i]==1 or (i>=x1 and i<= x2)) res += a[i];
 }
 cout<<res;
     return 0;
}