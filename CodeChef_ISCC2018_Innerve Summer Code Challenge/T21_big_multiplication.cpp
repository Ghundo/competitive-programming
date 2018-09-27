/**
 * author: marcavenzaid
 * created: 2018-07-20-00.38
 */

#include <bits/stdc++.h>

using namespace std;

const int MOD = 3;

inline int bignum_mod(string num, int m) {
    int rs = 0;
    for (int i = 0; i < num.length(); ++i) {
        rs = (rs*10 + (int)num[i] - '0') % m;
    }
    return rs;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int ti;
    cin >> ti;
    while (ti--) {
        string m, n;
        cin >> m >> n;
        cout << (bignum_mod(m, MOD) * bignum_mod(n, MOD)) % MOD << "\n";
    }
    return 0;
}
