#include "iostream"
#include "cmath"
#include "iomanip"
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
 db res1=0, res2=1, x;
 int cnt1=0, cnt2=0;
 while(n--){
  cin>>x;
  if(x<0) res1+=x,cnt1++;
  else if(x>0) res2*=x, cnt2++;
 }
 if(cnt1==0)cout<<"khong co so am";
 else cout<<rd(5)<<res1/cnt1;
 cout<<endl;
 if(cnt2==0) cout<<"khong co so duong";
 else cout<<rd(5)<<pow(res2,1.0/cnt2); 
    return 0;
}