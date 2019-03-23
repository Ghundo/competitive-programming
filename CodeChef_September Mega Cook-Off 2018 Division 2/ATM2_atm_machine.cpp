/**
 * author: marcavenzaid
 * date created: September 24, 2018
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie();
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        string ans;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (k - a[i] >= 0) {
                k -= a[i];
                ans += "1";
            } else {
                ans += "0";
            }
        }
        cout << ans << "\n";
    }
    return 0;
}