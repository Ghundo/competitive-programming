/**
 *    author: marcavenzaid
 *    created: 2018-07-08-02.48
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int ti;
    cin >> ti;
    while (ti--) {
        int n, m;
        cin >> n >> m;
        int a[n];
        int x = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i]%m == 0) {
                x++;
            }
        }
        int gss = pow(2, x) - 1;
        cout << gss << "\n";
    }
    return 0;
}
