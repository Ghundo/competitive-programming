/**
 * author: marcavenzaid
 * date created: September 22, 2018
 */

#include <bits/stdc++.h>

using namespace std;

void solve(int a[], int n) {
    int h = a[0], l = a[0];
    int h_updates = 0, l_updates = 0;
    for (int i = 1; i < n; ++i) {
        int x = a[i];
        if (x > h) {
            h = x;
            ++h_updates;
        }
        if (x < l) {
            l = x;
            ++l_updates;
        }
    }
    cout << h_updates << " " << l_updates << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    solve(a, n);
    return 0;
}