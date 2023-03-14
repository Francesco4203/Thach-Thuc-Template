vector<ll> fac, inv;
void prepare(vector<ll> &fac, vector<ll> &inv, ll n) {
    fac[0] = 1;
    rp(i, 1, n + 1) fac[i] = fac[i - 1] * i % mod;
    rp(i, 0, n + 1) inv[i] = pw(fac[i], mod - 2, mod);
}
ll nCk(ll n, ll k, ll mod) {
    return fac[n] * inv[k] % mod * inv[n - k] % mod;
}