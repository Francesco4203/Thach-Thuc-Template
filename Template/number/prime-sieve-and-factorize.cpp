vector<int> Eratosthenes(int n)
{
    vector<bool> check(n + 1, true);
    vector<int> prime;
    for (int i = 2; i * i <= n; i++)
    {
        if (check[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                if (check[j])
                {
                    check[j] = false;
                }
            }
        }
    }
    for (int i = 2; i <= n; i++)
        if (check[i])
            prime.push_back(i);
    return prime;
}
vector<vector<int>> Factor(vector<int> &prime, int n)
{ // n.logn
    vector<vector<int>> factor(n + 1);
    for (auto c : prime)
    {
        for (int i = c; i <= n; i += c)
        {
            factor[i].push_back(c);
        }
    }
    return factor;
}