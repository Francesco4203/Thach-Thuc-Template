vector<int> Djkstra(vector<vector<pii>> &graph, int start)
{
    int n = graph.size();
    vector<bool> check(n, 0);
    vector<int> dis(n, 999999999); // infinity
    dis[start] = 0;
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({0, start});
    while (!q.empty())
    {
        int s = q.top().y;
        q.pop();
        check[s] = true;
        for (auto c : graph[s])
        {
            if (check[c.x])
                continue;
            if (dis[s] + c.y < dis[c.x])
            {
                dis[c.x] = dis[s] + c.y;
                q.push({dis[c.x], c.x});
            }
        }
    }
    return dis;
}