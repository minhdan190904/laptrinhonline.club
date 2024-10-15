#include "bits/stdc++.h"
#define int long long
#define db double
#define endl "\n"
#define rd(x) fixed<<setprecision(x)
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//template <typename T>
//using ordered_set = tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;
const int MOD = 1e9+7;

using namespace std;
unordered_map<string, int> m;
bool check(string temp) {
    if (temp.size() < 2) return false;
    int first = temp[0] - '0';
    int last = temp.back() - '0';
    return m[temp] == 0 && (first + last <= 9);
}

string to_1(string s) {
    char c = (s[0] - '0' + s.back() - '0') + '0';
    return c + s.substr(1, s.size() - 2);
}

string to_2(string s) {
    char c = (s[0] - '0' + s.back() - '0') + '0';
    return s.substr(1, s.size() - 2) + c;
}

signed main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 string s,s1,s2;cin>>s;
 queue<string> q;
 q.push(s);
 int res = 1e18+10;
 string temp;
 while(q.size()){
  temp = q.front(); q.pop();
  res = min(res,stoll(temp));
  if(check(temp)){
   m[temp]=1;
   s1 = to_1(temp);
   s2 = to_2(temp);
   q.push(s1);
   q.push(s2);
  }
 }
 cout<<res;
  cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
    return 0;
}