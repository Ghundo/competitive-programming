/**
 * author: marcavenzaid
 * date created: September 24, 2018
 */

#include <bits/stdc++.h>

using namespace std;

inline void solve(int a[], int n) {
    set<int> _set;
    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = i; j < n; ++j) {
            sum += a[j];
            _set.insert(sum);
        }
    }
    cout << _set.size() << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        solve(a, n);
    }
    return 0;
}