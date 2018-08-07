/**
 * author: marcavenzaid
 * created: 2018-08-04-22.37
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    int a[n], b[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        b[i] = a[i];
    }
    while (k--) {
        for (int i = 1; i < n; ++i) {
            b[i] |= a[i-1];
        }
        copy(b+1, b+n, a+1);
    }
    for (int i = 0; i < n; ++i) {
        cout << b[i] << " ";
    }
    return 0;
}
