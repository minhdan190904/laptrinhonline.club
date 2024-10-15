#include "iostream"
#include "algorithm"
#include "vector"
#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)

const int MOD = 1e9+7;

using namespace std;
main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 string s;cin>>s;
 vector<int> a;
 for(auto x:s){
  if(x!='+') a.push_back(x-'0');
 }
 sort(a.begin(), a.end());
 cout<<a[0];
 for(int i = 1; i < a.size(); i++) cout<<"+"<<a[i];
    return 0;
}