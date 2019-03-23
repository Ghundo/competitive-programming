/**
 * author: marcavenzaid
 * created: 2018-08-25-23.50
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, z1, z2;
        cin >> n >> z1 >> z2;
        int a[n];
        int ans = 0;
        int x = false;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (x) {
                continue;
            }
            if (abs(a[i]) == z1 || abs(a[i]) == z2) {
                ans = 1;
                x = true;
            }
            if (z1 == 0 || z2 == 0) {
                ans = 2;
                x = true;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
