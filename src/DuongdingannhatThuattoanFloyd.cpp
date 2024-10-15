#include "iostream"
#include "algorithm"
using namespace std;
const int INF = 1e9+7;
int n, m, q;
int dist[505][505];

int main(){
    cin >> n >> m >> q;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j) dist[i][j] = 0;
            else dist[i][j] = INF;
        }
    }
    for(int i = 1; i <= m; i++){
        int u, v, w;
        cin >> u >> v >> w;
        dist[u][v] = min(dist[u][v], w);
    }
    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
    while(q--){
        int u, v;
        cin >> u >> v;
        if(dist[u][v] == INF) cout << -1 << '\n';
        else cout << dist[u][v] << '\n';
    }
    return 0;
}