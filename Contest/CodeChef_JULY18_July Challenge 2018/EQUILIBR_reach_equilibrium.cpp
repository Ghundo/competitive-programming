/**
 * author: marcavenzaid
 * created: 2018-07-15-18.08
 */

#include <bits/stdc++.h>

using namespace std;

const int MOD = (int)1e9 + 7;

inline int modular_exponentiation(long long x, unsigned int y, int m) {
    long long res = 1;
    x = x % m;
    while (y > 0) {
        if (y & 1) {
            res = (res*x) % m;
        }
        y = y>>1;
        x = (x*x) % m;
    }
    return res;
}

inline int modular_inverse(int a, int m) {
    int m1 = m;
    int y = 0, x = 1;
    if (m == 1) {
        return 0;
    }
    while (a > 1) {
        int q = a / m;
        int t = m;
        m = a % m, a = t;
        t = y;
        y = x - q * y;
        x = t;
    }
    if (x < 0) {
        x += m1;
    }
    return x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n = 5, k = 5;
    cin >> n >> k;
    int q = modular_exponentiation(2, n-1, MOD);
    double less_half_prob = static_cast<double>(n) / static_cast<double>(q);
    int p = q * (1-less_half_prob);
    int pq = ((long long)p * modular_inverse(q, MOD) % MOD);
    cout << pq << "\n";
    return 0;
}
