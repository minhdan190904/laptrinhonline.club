#include "bits/stdc++.h"
#define int long long
#define pii pair<int, int>
using namespace std;
signed main(){
    int t, n, s, b, c, f, v; cin >> t;
    while(t--){
        bool check = false;
        priority_queue<pii, vector<pii>, greater<pii>> pq;
        map<int, int> mp;
        cin>>s>>f;
        pq.push({0, s}); mp[s] = 0;
        while(pq.size()){
            auto u = pq.top(); pq.pop();
            if(u.first>mp[u.second]) continue;
            if(u.second==f){
                cout << u.first << endl;
                check = true;
                break;
            }
            for(int a = 1; a*a<=u.second; a++){
                if(u.second%a==0){
                    int b = u.second/a;
                    if(b%a==0) c = b/a;
                    else c = b + a;
                    v = (a-1)*(b+1);
                    if(v>=f and (mp[v]==0 or mp[v]>u.first+c)) {
                        pq.push({u.first+c, v});
                        mp[v] = u.first+c;
                    }
                }
            }
        }
       if(!check) cout<<-1<<endl;
    }
    return 0;
}