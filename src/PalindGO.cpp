#include "bits/stdc++.h"
using namespace std;
#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)
#define FOD(i,a,b) for(int i=a;i>=b;i--)
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define MOD 1000000007
#define min(a,b) (a>b?b:a)
#define max(a,b) (a>b?a:b)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define kazuha_ve_di main
void setup(){
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    fastIO
}

int n;
char a[21][21];
unordered_set<string> res;

bool check(string s) {
    int l = 0;
    int r = s.size() - 1;
    while (l < r) {
        if (s[l] != s[r]) {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

void Try(string temp, int x, int y){
 if(x>=n or y>=n) return;
 if(x==n-1 and y==n-1){
 if(check(temp)) res.insert(temp);
  return;
 }
 if(temp.size()>= n + 1 ){
  
  if(a[x+1][y] == temp[2*n-2-temp.size()]) Try(temp+a[x+1][y],x+1,y);
 }
 else Try(temp+a[x+1][y],x+1,y);
 
 if(temp.size()>= n + 1 ){
  
  if(a[x][y+1] == temp[2*n-2-temp.size()]) Try(temp+a[x][y+1],x,y+1);
 }
 else Try(temp+a[x][y+1],x,y+1);
}

kazuha_ve_di(){
 cin>>n;
 for(int i = 0; i < n; i++){
  for(int j = 0; j < n; j++){
   cin>>a[i][j];
  }
 }
 if(a[0][0]!=a[n-1][n-1]){
  cout<<0; return 0;
 }
 string aa = "";
 aa += a[0][0];
 Try(aa, 0, 0);
 cout<<res.size();
 return 0;
}