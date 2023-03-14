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
        rp(x, -1, 2)
        {
            rp(y, -1, 2)
            {
                pii c = {s.x + dx[i], s.y + dy[i]};
                if (check[c.x][c.y] || c == s || c.x < 0 || c.x >= n || c.y < 0 || c.y >= m)
                    continue;
                // process c
                q.push(c);
            }
        }
    }
}