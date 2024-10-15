#include "bits/stdc++.h"
#define int long long
#define rd(x) fixed<<setprecision(x)
#define pss pair<string, string>

using namespace std;


signed main(){
 map<pss, string> m;
m[{"Kim","Thuy"}] = "Kim sinh Thuy";
m[{"Moc","Thuy"}] = "Thuy sinh Moc";
m[{"Moc","Hoa"}] = "Moc sinh Hoa";
m[{"Hoa","Tho"}] = "Hoa sinh Tho";
m[{"Tho","Kim"}] = "Tho sinh Kim";
m[{"Moc","Kim"}] = "Kim khac Moc";
m[{"Moc","Tho"}] = "Moc khac Tho";
m[{"Tho","Thuy"}] = "Tho khac Thuy";
m[{"Thuy","Hoa"}] = "Thuy khac Hoa";
m[{"Hoa","Kim"}] = "Hoa khac Kim";
 string s1,s2; cin>>s1>>s2;
 if(m[{s1,s2}]!="")
 cout<<m[{s1,s2}];
 else cout<<m[{s2,s1}];
 return 0;
}