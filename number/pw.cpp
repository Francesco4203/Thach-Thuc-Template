int pw(int a, int b) {
    int res = 1;
    for (a %= mod; b; (a *= a) %= mod, b >>= 1)
        if (b & 1) (res *= a) %= mod;
    return res;
}