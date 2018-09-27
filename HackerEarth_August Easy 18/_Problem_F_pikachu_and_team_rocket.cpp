/**
 * author: marcavenzaid
 * created: 2018-08-04-23.19
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    int health[n];
    for (int i = 0; i < n; ++i) {
        cin >> health[i];
    }
    for (int i = 0; i < q; ++i) {
        int type;
        cin >> type;
        if (type == 1) {
            int l, r;
            cin >> l >> r;
            cout << *max_element(health+(l-1), health+r) << "\n";
        } else {
            int p, k;
            cin >> p >> k;
            int temp = health[k-1];
            if (p == 1) {
                for (int j = k-1; j < n-1; ++j) {
                    health[j] = health[j+1];
                }
                health[n-1] = temp;
            } else {
                for (int j = k-1; j >= 1; --j) {
                    health[j] = health[j-1];
                }
                health[0] = temp;
            }
        }
    }
    return 0;
}
