/**
 * author: marcavenzaid
 * created: 2018-08-19-23.56
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int ti;
    cin >> ti;
    while (ti--) {
        int n, k;
        cin >> n >> k;
        int v = 0;
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            if (a == 1) {
                if (i%2 == 0) {
                    v += a;
                } else {
                    v = abs(v - a);
                }
            }
        }
        cout << ((abs(v) >= k) ? 1 : 2) << "\n";
    }
    return 0;
}
