void dfs(int s, int u, vector<vector<int>> &graph) // int or sth else like pii, depends
{
    // process s
    for (auto c : graph[s])
    {
        if (c == u)
            continue;
        dfs(c, s, graph);
        // process s <-> c
    }
}