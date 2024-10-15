#include "bits/stdc++.h"
#define int long long
#define db double
#define endl "\n"
#define pii pair<int,int>
#define x first
#define y second
#define rd(x) fixed<<setprecision(x)
const int MOD = 1e9+7;

using namespace std;

pair<int, int> c1(const pair<int, int>& a, const pair<int, int>& b) {
    return make_pair(b.first + (b.second - a.second), b.second - (b.first - a.first));
}

pair<int, int> d1(const pair<int, int>& a, const pair<int, int>& b) {
    return make_pair(a.first + (b.second - a.second), a.second - (b.first - a.first));
}

pair<int, int> c2(const pair<int, int>& a, const pair<int, int>& b) {
    return make_pair(b.first - (b.second - a.second), b.second + (b.first - a.first));
}

pair<int, int> d2(const pair<int, int>& a, const pair<int, int>& b) {
    return make_pair(a.first - (b.second - a.second), a.second + (b.first - a.first));
}

void pp(pii& a){
    cout<<a.x<<" "<<a.y<<endl;
}

struct cmp {
    bool operator() (const pair<pii, pii>& a, const pair<pii, pii>& b) const {
        if(a.first.first != b.first.first) return a.first < b.first;
        return a.second < b.second;
    }
};

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin>>n;
    set<pii> s;
    map<pair<pii,pii>,pair<pii,pii>,cmp> m;
    pii a[n]; for(auto &k:a){
        cin>>k.x>>k.y;
        s.insert(k);
    }
    pii C1,D1,C2,D2;
    int res=0;
    pair<pii,pii> temp;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            D1 = c1(a[i],a[j]);
            C1 = d1(a[i],a[j]);
            D2 = c2(a[i],a[j]);
            C2 = d2(a[i],a[j]);
            if(s.find(C1)!=s.end() and s.find(D1)!=s.end()){
                temp={C1,D1};
                if(m[{a[i],a[j]}]!=temp){
                    res++;
                    m[{a[i],a[j]}] = {C1,D1};
                    m[{a[j],a[i]}] = {D1,C1};
                    m[{D1,C1}] = {a[j],a[i]};
                    m[{C1,D1}] = {a[i],a[j]};
                    m[{C1,a[i]}] = {D1,a[j]};
                    m[{a[i],C1}] = {a[j],D1};
                    m[{D1,a[j]}] = {C1,a[i]};
                    m[{a[j],D1}] = {a[i],C1};
                }
            }
            if(s.find(C2)!=s.end() and s.find(D2)!=s.end()){
                temp={C2,D2};
                if(m[{a[i],a[j]}]!=temp){
                    res++;
                    m[{a[i],a[j]}] = {C2,D2};
                    m[{a[j],a[i]}] = {D2,C2};
                    m[{D2,C2}] = {a[j],a[i]};
                    m[{C2,D2}] = {a[i],a[j]};
                    m[{C2,a[i]}] = {D2,a[j]};
                    m[{a[i],C2}] = {a[j],D2};
                    m[{D2,a[j]}] = {C2,a[i]};
                    m[{a[j],D2}] = {a[i],C2};
                }
            }
        }
        s.erase(a[i]);
    }
    cout<<res;
    return 0;
}