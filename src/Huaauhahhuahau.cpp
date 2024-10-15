#include "bits/stdc++.h"
using namespace std;

string rv(string s){
 reverse(s.begin(), s.end());
 return s;
} 

int main()
{
 string s; cin >> s;
 string st = "";
 map<char, int> m;
 m['a'] = 1;
 m['e'] = 1;
 m['i'] = 1;
 m['u'] = 1;
 m['o'] = 1;
 for(char x:s){
  char k = x;
  if(m[k] == 1) st += k;
 }
 if(st == rv(st)) cout<<"S";
 else cout <<"N";
    return 0;
}