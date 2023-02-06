void dfs(int s, vector<vector<int>> &graph, vector<bool> &check) // int or sth else like pii, depends
{
    check[s] = true;
    // process s
    for (auto c : graph[s])
    {
        if (check[c])
            continue;
        dfs(c, graph, check);
        // process s <-> c
    }
}