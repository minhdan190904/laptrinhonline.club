#include "bits/stdc++.h"
//#define int long long
using namespace std;

int a[9];
int res = 99999;
int n,k,m;
int jk(string s, char c){
 int res = 0;
 for(auto x:s){
  if(x==c) res++;
 }
 return res;
}
void Try(string temp) {
    if (temp.size() == 9) {
        n=0;
        m=0;
        k=0;
        for (int i = 0; i < 9; i++) {
            if(temp[i]=='0')n+=a[i];
            else if(temp[i]=='1') m+=a[i];
            else k+=a[i];
        }
        int g = max({n,k,m});
        int h = min({n,k,m});
        res = min(res, g-h);
        return;
    }
    if(!(jk(temp,'0')==3))Try(temp + "0");
    if(!(jk(temp,'1')==3))Try(temp + "1");
    if(!(jk(temp,'2')==3))Try(temp + "2");
}

main() {
    for (int &x : a) cin >> x;
    Try("");
    cout << res;
    return 0;
}