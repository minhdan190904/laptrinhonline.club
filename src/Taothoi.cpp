#include <bits/stdc++.h>
using namespace std;

#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)
#define MOD 1000000007
#define min(a,b) (a>b?b:a)
#define max(a,b) (a>b?a:b)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define aventurine_ve_di main
#define pii pair<int,int>
#define x first
#define y second

void setup(){
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    fastIO
}

class bfs {
public:
    
    int check(pii a, int m, int n){
        return a.first >= 0 and a.first < m and a.second >= 0 and a.second < n;
    }
    
    int solve(vector<vector<int>>& a) {
        int m,n,cnt,temp,res;
        m = a.size();
        n = a[0].size();
        int cx[] = {0,0,1,-1};
        int cy[] = {1,-1,0,0};
        cnt = 0;
        queue<pii> q;
        int cnt1 = 0;
        cnt = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(a[i][j] == 2) q.push({i,j});
                else if(a[i][j] == 1) cnt1++;         
            }
        }
        if(cnt1 == 0) return 0;
        res = 0;
        pii h,k;
        
        while(q.size()){
            temp = q.size();
            while(temp--){
                h = q.front();
                q.pop();
                for(int i = 0; i < 4; i++){
                    k.x = h.x + cx[i];
                    k.y = h.y + cy[i];
                    if(check(k,m,n) and a[k.x][k.y] == 1){
                        cnt++;
                        q.push({k.x,k.y});
                        a[k.x][k.y] = 2;
                    }
                }
            }
            res++;
            if(cnt == cnt1) return res;
        }
        return -1;
    }
};

aventurine_ve_di(){
    bfs s;
    int n,m; cin>>n>>m;
    vector<vector<int>> a(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int res = s.solve(a);
    if(res==-1) cout<<-1;
    else cout << res * 60;
    return 0;
}