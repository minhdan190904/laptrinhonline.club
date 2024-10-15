#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
bool check(string s){
 for(char x:s){
  if(!isdigit(x)) return false;
 }
 return true;
}
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 string a,b; cin >> a >> b;
 bool t1 = check(a), t2 = check(b);
 if(!t1 or !t2) cout << "dinh dang dau vao khong hop le!";
 else cout <<"tong hai so la: "<< stoll(a) + stoll(b); 
    return 0;
}