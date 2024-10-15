#include "iostream"
#include "algorithm"
#include "vector"
#define int long long
#define endl "\n"
#define rd(x) fixed<<setprecision(x)

const int MOD = 1e9+7;

using namespace std;

bool check2(int a, int b, int c){
 return (a+b>c) and (a+c>b) and (b+c>a);
}

bool check(vector<int>& a){
 do{
  if(check2(a[0], a[1], a[2]) and check2(a[3], a[4], a[5])) return true;
 }while(next_permutation(a.begin(), a.end()));
 return false;
}

main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 int t; cin>>t;
 while(t--){
  vector<int> a(6); for(int &x:a) cin>>x;
  sort(a.begin(), a.end());
  if(check(a)) cout<<"yes"<<endl;
  else cout<<"no"<<endl;
 }
}