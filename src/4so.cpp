#include "bits/stdc++.h"
#define int long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

signed main(){
    fastIO
    int n; cin>>n;
    int a[n]; for(int &x:a) cin>>x;
    unordered_map<int, int> mp;
    int res = 0;
    for(int i=1; i<n; ++i){
        for(int j=0; j<i; ++j) mp[a[i]+a[j]]+=1;
        for(int j=i+2; j<n; j++) res += mp[a[i+1]+a[j]];
    }
    cout<<res;
    return 0;
}