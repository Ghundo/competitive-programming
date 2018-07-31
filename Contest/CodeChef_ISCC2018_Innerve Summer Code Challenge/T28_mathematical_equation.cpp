/**
 * author: marcavenzaid
 * created: 2018-07-24-00.03
 */

#include <bits/stdc++.h>

using namespace std;

const int MOD = (int)1e9 + 9;

inline long long solve_lhs(long long k) {
    return k * (k+1);
}

inline long long solve_rhs(long long a, long long b) {
    return 4*a*b + 2*max(a,b);
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
    int n, q;
    cin >> n >> q;
    long long a[n][2];
    for (int i = 0; i < n; ++i) {
        cin >> a[i][0] >> a[i][1];
    }
    unordered_map<long long, int> rhs_count_map;
    for (int i = 0; i < n; ++i) {
        long long rhs = solve_rhs(a[i][0], a[i][1]);
        ++rhs_count_map[rhs];
    }
    for (int i = 0; i < q; ++i) {
        long long k;
        cin >> k;
        long long lhs = solve_lhs(k);
        if (rhs_count_map.find(lhs) == rhs_count_map.end()) {
            cout << -1 << "\n";
        } else {
            cout << modular_inverse(rhs_count_map[lhs], MOD) << "\n";
        }
    }
    return 0;
}
