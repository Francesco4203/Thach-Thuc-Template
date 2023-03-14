int n, m;
cin >> n >> m;
// input a graph
vector<vector<int>> graph(n + 5);

rp(i, 0, m) {
    int u, v;
    cin >> u >> v;
    graph[u].push_back(v);
    // graph[v].push_back(u);
}