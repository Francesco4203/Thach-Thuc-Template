struct DSU {
    vector<int> par;
    int comp;
    DSU(int n) {
        par = vector<int>(n, -1);
        comp = n;
    }

    int parent(int u) { return p[u] < 0 ? u : p[u] = root(p[u]); }

    bool joint(int u, int v) {
        if ((u = root(u)) == (v = root(v))) return 0;
        if (p[u] > p[v]) swap(u, v);
        p[u] += p[v];
        p[v] = u;
        comp--;
        return 1;
    }
};