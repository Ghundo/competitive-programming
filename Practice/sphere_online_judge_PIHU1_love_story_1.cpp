/**
 * author: marcavenzaid
 * created: 2018-07-06-00.34
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        unsigned int a[n] = {0};
        for (int j = 0; j < n; ++j) {
            cin >> a[j];
        }
        sort(a, a+n);
        unsigned int p;
        cin >> p;
        bool is_yes = false;
        for (int j = 0; j < n-2; ++j) {
            for (int k = j+1; k < n-1; ++k) {
                int x = p - a[j] - a[k];
                if (binary_search(a+k+1, a+n, x)) {
                    is_yes = true;
                    break;
                }
            }
            if (is_yes) {
                break;
            }
        }
        cout << ((is_yes) ? "YES" : "NO") << "\n";
    }
    return 0;
}