#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
priority_queue<int, vector<int>, greater<int>> depths;

void dfs(int v, int d) {
    visited[v] = true;
    depths.push(d);
    for (int u : adj[v]) {
        if (!visited[u]) {
            dfs(u, d + 1);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    adj.resize(n + 1);
    visited.resize(n + 1, false);
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, 0);
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        ans += i - depths.top();
        depths.pop();
    }
    cout << ans << endl;
    return 0;
}