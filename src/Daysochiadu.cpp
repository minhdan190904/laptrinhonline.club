#include "iostream"
#include "algorithm"
#include "map"
#include "vector"
#define endl "\n"
#define ll long long
#define db double
#define rd(x) fixed<<setprecision(x)

const int MOD = 1e9+7;

using namespace std;

int cdu(int a, int b){
 int res = a%b;
 if(res<0) res+=b;
 return res;
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 int n, m, q; cin>>n>>m>>q;
 map<int, int> mp;
 int x;
 vector<vector<int>> dp(m+5);
 for(int i = 0; i < n; i++){
  cin>>x;
  int du = cdu(x, m);
  mp[du]++;
  dp[du].push_back(i + 1);
 }
 while(q--){
  int k, r; cin>>k>>r;
  if(mp[r] < k) cout<<"-1"<<endl;
  else cout<< dp[r][k-1] <<endl;
 }
    return 0;
}