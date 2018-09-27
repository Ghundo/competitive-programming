/**
 * author: marcavenzaid
 * created: 2018-08-14-23.31
 */

#include <bits/stdc++.h>

using namespace std;

inline int binary_search_last(const int A[], const int N, const int X) {
    int l = 0, m, r = N - 1;
    int last = - 1;
    while (l <= r) {
        m = (l + r) / 2;
        if(A[m] == X) {
            last = m;
            l = m + 1;
        } else if (A[m] < X) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return last;
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
        sort(a, a+n);
        int m = 0, h = 0;
        int l = 0, r = 0;
        while (r < n-1) {
            int x = a[l];
            r = binary_search_last(a, n, x);
            ++m;
            int range = r - l + 1;
            if (range > h) {
                h = range;
            }
            l = r + 1;
        }
        cout << m << " " << h << "\n";
    }
    return 0;
}
