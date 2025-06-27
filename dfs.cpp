#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")    
#define int long long
#define ll long long        
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);

void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;
    cout << node << " ";
    for(auto neighbor : adj[node]) {
        if(!visited[neighbor]) {
            dfs(neighbor, adj, visited);
        }
    }
}

void solve(){
    int n;
    cin >> n;
    vector<vector<int>> adj(n + 1);
    vector <bool> visited(n + 1, false);
    for(int i = 1; i < n; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, adj, visited);
}

int32_t main() {
    fast_input;
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}