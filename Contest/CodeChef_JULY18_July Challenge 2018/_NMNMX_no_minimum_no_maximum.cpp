/**
 * author: marcavenzaid
 * created: 2018-07-09-00.31
 */

#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9+7;

long long modular_exponentiation(long long x, unsigned int y, int p) {
    long long res = 1;
    x = x % p;
    while (y > 0) {
        if (y & 1) {
            res = (res*x) % p;
        }
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}

void binomial_coeff(long long a[], int n, int k, int m) {
    long long c[k+1];
    memset(c, 0, sizeof(c));
    c[0] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = min(i, k); j > 0; --j) {
            c[j] = (c[j] + c[j-1]) % m;
        }
        if (i >= k-1) {
            a[i] = c[k];
        }
        for (int i = 0; i < k; ++i) {
            a[i] = 0;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for (int ti = 1; ti <= t; ++ti) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a, a+n);
        long long o_as_max[n];
        binomial_coeff(o_as_max, n-1, k-1, MOD);
        long long finalo[n];
        long long p = 1;
        for (int i = 0; i < n; ++i) {
            finalo[i] = o_as_max[n-1] - o_as_max[n-1-i] - o_as_max[i];
            p = (p * modular_exponentiation(a[i], finalo[i], MOD)) % MOD;
        }
        cout << p << "\n";
    }
    return 0;
}
