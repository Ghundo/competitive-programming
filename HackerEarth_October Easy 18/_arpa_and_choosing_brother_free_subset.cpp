#include <bits/stdc++.h>

using namespace std;

const int MOD = (int)1e9 + 7;

long long binomial_coefficient(int n, int r, int p) {
    long long c[r+1];
    memset(c, 0, sizeof(c));
    c[0] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = min(i, r); j > 0; --j) {
            c[j] = (c[j] + c[j-1]) % p;
        }
    }
    return c[r];
}

long long lucas_theorem(int n, int r, int p) {
    if (r == 0) {
        return 1;
    }
    long long ni = n % p, ri = r % p;
    return (binomial_coefficient(n/p, r/p, p) 
            * binomial_coefficient(ni, ri, p)) % p;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    unordered_map<int, int> u_map;
    for (int i = 1; i < n; ++i) {
        int a;
        cin >> a;
        ++u_map[a];
    }
    int ans;
    if (k == 0) {
        ans = 1;
    } else if (k == 1) {
        ans = lucas_theorem(n, k, MOD);
    } else {
        ans = lucas_theorem(n, k, MOD);
        for (auto e : u_map) {
            int _e = e.second;
            if (_e > 1) {
                ans -= lucas_theorem(_e, k, MOD);
            }
        }
    }
    cout << ans << "\n";
    return 0;
}
