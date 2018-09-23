/**
 * author: marcavenzaid
 * date created: September 24, 2018
 */

#include <bits/stdc++.h>

using namespace std;

inline int solve(int a[], int n, int m, int d) {
    int ans = 0;
    for (int i = 0; i < n - m + 1; ++i) {
        int sum = 0;
        for (int j = i; j < i + m; ++j) {
            sum += a[j];
        }
        if (sum == d) {
            ++ans;
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie();
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int d, m;
    cin >> d >> m;
    cout << solve(a, n, m, d) << "\n";
    return 0;
}