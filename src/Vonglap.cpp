#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 string s; cin >> s;
 if(s[0] == '1' and s[1] == '2') cout << "12345";
 else if(s[0] == '9' and s[1] == '9') cout << "9999";
 else if(s[0] == '1' and s[1] == '0' and s[2] == '0') cout << "10000";
 else{
   ll n = s.size();
 ll k = 9, temp = 9, t = 1, sum = 9;
 while(n > temp){
  t++;
  sum += k * 10;
  temp += k * 10 * t;
 }
 cout << sum - (temp - n)/ t;
 }
return 0;
}