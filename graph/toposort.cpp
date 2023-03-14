vector<int> topo;
bool bfs(vector<vector<int>> &graph, vector<int> &deg)
{
    // deg = IN degree
    priority_queue<int, vector<int>, greater<int>> q;
    rp(i, 0, deg.size()) if (!deg[i]) q.push(i);
    while (!q.empty())
    {
        int s = q.top();
        topo.push_back(s);
        q.pop();
        for (auto c : graph[s])
        {
            deg[c]--;
            if (!deg[c])
                q.push(c);
        }
    }
    rp(i, 0, deg.size()) if (deg[i]) return false; // cycle detected
    return true;
}