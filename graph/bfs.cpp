void bfs(vector<vector<int>> &graph,
         int start)  // int or sth else like pii, depends
{
    int n = graph.size();
    vector<bool> check(n, 0);
    queue<int> q;
    q.push(start);
    while (!q.empty()) {
        int s = q.front();
        q.pop();
        check[s] = true;
        // process s
        for (auto c : graph[s]) {
            if (check[c]) continue;
            q.push(c);
            // process s <-> c
        }
    }
}