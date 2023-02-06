struct DSU
{
    vector<int> par;
    int comp;
    DSU(int n)
    {
        par = vector<int>(n, -1);
        comp = n;
    }
    int parent(int u)
    {
        if (par[u] < 0)
            return u;
        return parent(par[u]);
    }
    bool joint(int u, int v)
    {
        int pu = parent(u), pv = parent(v);
        if (pu == pv)
            return false;
        if (-par[pu] < -par[pv])
        {
            par[pv] += par[pu];
            par[pu] = pv;
        }
        else
        {
            par[pu] += par[pv];
            par[pv] = pu;
        }
        comp -= 1;
        return true;
    }
};