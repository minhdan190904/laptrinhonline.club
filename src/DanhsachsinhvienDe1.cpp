#include "bits/stdc++.h"
#define db double
#define minhdan main
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FOD(i,a,b) for(int i=a;i>=b;i--)
#define int long long
#define pii pair<int,int>
#define pb push_back
#define pf push_front
#define rd(x) fixed<<setprecision(x)
const int MOD=1e9+7;
using namespace std;

class sv{
 public:
  string id, name, level;
  db point;
 public:
  sv(): id(""), name(""), point(0.0){}
  friend istream& operator>>(istream& is, sv& s){
   is >> s.id;
   cin.ignore(1e9, '\n');
   getline(is, s.name);
   is >> s.point;
   cin.ignore(1e9, '\n');
   if(s.point >= 0.0 and s.point < 2.0) s.level = "Yeu";
   else if(s.point >= 2.0 and s.point < 2.5) s.level = "Trung binh";
   else if(s.point >= 2.5 and s.point < 3.2) s.level = "Kha";
   else if(s.point >= 3.2 and s.point < 3.6) s.level = "Gioi";
   else s.level = "Xuat sac";
   return is;
  }
  friend ostream& operator<<(ostream& os, sv& s){
   cout << s.id << " - " << s.name << " - " << s.point << " - " << s.level << endl;
   return os;
  }
};

bool cmp(sv a, sv b){
 if(a.name == b.name){
  return a.id < b.id;
 }
 return a.name < b.name;
}

void pria(sv *s, string st, int n){
 bool check = false;
 FOR(i, 0, n-1){
  if(st == s[i].id){
   cout << s[i] << endl;
   check = true;
   break;
  }
 }
 if(check == false) cout << "Khong tim thay sinh vien" << "\n" << "\n";
}

void prib(sv s[], int n){
 sort(s, s + n, cmp);
 FOR(i, 0, n-1){
  cout << s[i];
 } 
}

minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int a, b; cin >> a >> b;
 int n; cin >> n;
 sv s[n];
 for(int i = 0; i < n; i++){
  cin >> s[i];
 }
 string st; getline(cin, st);
 if(a == 1) pria(s, st, n);
 if(b == 1) prib(s, n);
    return 0;
}