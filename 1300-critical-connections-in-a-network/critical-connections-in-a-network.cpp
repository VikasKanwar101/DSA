class Solution {
public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<int> adj[n];

        // Build the undirected graph
        for (auto &edge : connections) {
            int u = edge[0], v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> tin(n, -1);      // discovery time of each node
        vector<int> low(n, -1);      // lowest discovery time reachable
        vector<vector<int>> bridges;
        vector<bool> visited(n, false);
        int timer = 0;

        function<void(int, int)> dfs = [&](int node, int parent) {
            visited[node] = true;
            tin[node] = low[node] = timer++;

            for (int neighbor : adj[node]) {
                if (neighbor == parent) continue;

                if (!visited[neighbor]) {
                    dfs(neighbor, node);
                    low[node] = min(low[node], low[neighbor]);

                    // Check if the edge is a bridge
                    if (low[neighbor] > tin[node]) {
                        bridges.push_back({node, neighbor});
                    }
                } else {
                    // Back edge
                    low[node] = min(low[node], tin[neighbor]);
                }
            }
        };

        dfs(0, -1); // Start DFS from node 0

        return bridges;
    }
};
