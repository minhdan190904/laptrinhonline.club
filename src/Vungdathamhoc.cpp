#include <iostream>
#include <vector>
#include <stack>
#define int long long
using namespace std;

int dfs(int node, vector<vector<int>>& adj, vector<bool>& visited) {
    stack<int> s;
    s.push(node);
    visited[node] = true;
    int size = 0;
    
    while (!s.empty()) {
        int u = s.top();
        s.pop();
        size++;
        
        for (int v : adj[u]) {
            if (!visited[v]) {
                visited[v] = true;
                s.push(v);
            }
        }
    }
    return size;
}

 main() {
    int q;
    cin >> q;

    while (q--) {
        int n, m, c_lib, c_road;
        cin >> n >> m >> c_lib >> c_road;

        vector<vector<int>> adj(n + 1);  // Adjacency list
        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        if (c_lib <= c_road) {
            // If building a library is cheaper than or equal to building a road, build a library in each city
            cout << n * c_lib << endl;
            continue;
        }

        vector<bool> visited(n + 1, false);
        long long total_cost = 0;

        for (int i = 1; i <= n; i++) {
            if (!visited[i]) {
                int component_size = dfs(i, adj, visited);
                total_cost += c_lib + (component_size - 1) * c_road;
            }
        }

        cout << total_cost << endl;
    }

    return 0;
}