bool p[N];
void sieve(vector<int>& pr) {
    for (int i = 2; i < N; ++i) {
        if (!p[i]) pr.push_back(i);
        for (int j = 0; j < (int)pr.size() && i * pr[j] < N; ++j) {
            p[i * pr[j]] = 1;
            if (i % pr[j] == 0) break;
        }
    }
}
vector<vector<int>> Factor(vector<int>& pr, int n) {  // n.logn
    vector<vector<int>> factor(n + 1);
    for (auto& c : pr) {
        for (int i = c; i <= n; i += c) {
            factor[i].push_back(c);
        }
    }
    return factor;
}