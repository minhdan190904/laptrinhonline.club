#include<bits/stdc++.h>
using namespace std;
#define MAX 1005
int K, N, M;
vector<int> a[MAX];
bool visited[MAX], canReach[MAX][MAX];

void DFS(int u, int v) {
    canReach[u][v] = true;
    for (int i = 0; i < a[v].size(); i++) {
        int x = a[v][i];
        if (!canReach[u][x]) DFS(u, x);
    }
}

int main() {
    cin >> K >> N >> M;
    vector<int> friends(K);
    for (int i = 0; i < K; i++) {
        cin >> friends[i];
    }
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
    }
    for (int i = 0; i < K; i++) {
        DFS(friends[i], friends[i]);
    }
    int res = 0;
    for (int i = 1; i <= N; i++) {
        bool flag = true;
        for (int j = 0; j < K; j++) {
            if (!canReach[friends[j]][i]) {
                flag = false;
                break;
            }
        }
        if (flag) res++;
    }
    cout << res;
    return 0;
}