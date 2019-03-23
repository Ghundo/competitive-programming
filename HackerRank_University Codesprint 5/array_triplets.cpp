/**
 * author: marcavenzaid
 * created: 2018-09-08-00.10
 */

#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> a;
int ans = 0;

void solve(int i, long long p, long long q, long long r, bool bp, bool bq, bool br) {
    if (i == n) {
        if (p == q && q == r && bp && bq && br) {
            ++ans;
        }
        return;
    }
    solve(i + 1, p + a[i], q, r, true, bq, br);
    solve(i + 1, p, q + a[i], r, bp, true, br);
    solve(i + 1, p, q, r + a[i], bp, bq, true);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    solve(0, 0, 0, 0, 0, 0, 0);
    cout << ans << "\n";
    return 0;
}
