
// lower bound solution
// reverse for upper bound
// solve() check if mid satisfied the problem

int binary_search() {
    int l = LEFT_BOUND;
    int r = RIGHT_BOUND;
    while (l < r) {
        int mid = (l + r) / 2;
        if (solve(mid))
            r = mid;
        else
            l = mid + 1;
    }
    return l;
}