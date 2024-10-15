#include "bits/stdc++.h"
#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)

using namespace std;

main()
{
 string s; cin >> s;
 int sum = 0;
 int check = false;
 for(char x:s){
  sum+=x-'0';
  if(x=='0') check = true;
 }
 if(sum%9!=0 or !check){
  cout<<-1; return 0;
 }
 sort(s.begin(), s.end(), greater<char>());
 cout<<s;
    return 0;
}