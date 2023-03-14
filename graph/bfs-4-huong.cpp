void bfs(vector<vector<int>> &graph, pii start)
{
    int n = graph.size();
    int m = graph[0].size();
    vector<vector<bool>> check(n, vector<bool>(m, 0));
    queue<pii> q;
    q.push(start);
    while (!q.empty())
    {
        pii s = q.front();
        q.pop();
        check[s.x][s.y] = true;
        // process s
        vector<int> dx = {0, -1, +1, 0};
        vector<int> dy = {1, 0, 0, -1};
        rp(i, 0, 4)
        {
            pii c = {s.x + dx[i], s.y + dy[i]};
            if (check[c.x][c.y] || c.x < 0 || c.x >= n || c.y < 0 || c.y >= m)
                continue;
            // process c
            q.push(c);
        }
    }
}