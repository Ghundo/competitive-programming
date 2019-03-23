/**
 * author: marcavenzaid
 * date created: September 24, 2018
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        set<int> _set;
        int minimum_moves = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] <= n && _set.find(a[i]) == _set.end()) {
                _set.insert(a[i]);
            } else {
                ++minimum_moves;
            }
        }        
        cout << minimum_moves << "\n";
    }
    return 0;
}