/**
 * author: marcavenzaid
 * date created: September 23, 2018
 */

#include <bits/stdc++.h>

using namespace std;

void solve(int s, int t, int a, int b, int apples[], int oranges[], int m, 
        int n) {
    int ans1 = 0, ans2 = 0;
    for (int i = 0; i < m; ++i) {
        int x = a + apples[i];
        if (x >= s && x <= t) {
            ++ans1;
        }
    }
    for (int i = 0; i < n; ++i) {
        int x = b + oranges[i];
        if (x >= s && x <= t) {
            ++ans2;
        }
    }
    cout << ans1 << "\n" << ans2 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int s, t, a, b, m, n;
    cin >> s >> t >> a >> b >> m >> n;
    int apples[m], oranges[n];
    for (int i = 0; i < m; ++i) {
        cin >> apples[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> oranges[i];
    }
    solve(s, t, a, b, apples, oranges, m, n);
    return 0;
}