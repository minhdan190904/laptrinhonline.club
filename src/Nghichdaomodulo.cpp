#include "bits/stdc++.h"
#define int long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

int x,y,d,temp;

void mr_eclid(int a, int b){
    if(b == 0){
        x = 1;
        y = 0;
        d = a;
    }
    else{
        mr_eclid(b,a%b);
        temp = x;
        x = y;
        y = temp - y * (a/b);
    }
}

// ax+my=1

int nd_modul(int a, int b){
    mr_eclid(a,b);
    if(d!=1) return 0;
    return (x%b+b)%b;
}


using namespace std;
signed main(){
    int t,c,d; cin>>t;
    while(t--){
        cin>>c>>d;
        cout<<nd_modul(c,d)<<"\n";
    }
    return 0;
}