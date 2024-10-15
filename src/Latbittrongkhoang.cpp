#include "iostream"
#define ll long long
#define db double
#define rd(x) fixed<<setprecision(x)

const int MOD = 1e9+7;

using namespace std;

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int q;
 string s; cin>>s>>q;
 int a[s.size()+5] = {};
 while(q--){
  int l, r; cin>>l>>r;
  a[l]++;
  a[r+1]--;
 }
 int temp = 0;
 for(unsigned i = 0; i < s.size(); i++){
  temp += a[i];
  if(temp%2==1){
   s[i] = abs(s[i]-'1') + '0';
  }
 }
 cout<<s;
    return 0;
}