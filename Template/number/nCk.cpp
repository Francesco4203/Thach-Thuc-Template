vector<ll> fac, inverse;
void prepare(vector<ll> &fac, vector<ll> &inverse, ll n)
{
    fac[0] = 1;
    for (ll i = 1; i <= n; i++)
        fac[i] = fac[i - 1] * i % mod;
    for (ll i = 0; i <= n; i++)
        inverse[i] = FastPow(fac[i], mod - 2, mod);
}
ll nCk(ll n, ll k, ll mod)
{
    return fac[n] * inverse[k] % mod * inverse[n - k] % mod;
}