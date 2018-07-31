/**
 * author: marcavenzaid
 * created: 2018-07-19-23.27
 */

#include <bits/stdc++.h>

using namespace std;

inline bool is_prime(int x) {
    if (x <= 1) {
        return false;
    }
    if (x <= 3) {
        return true;
    }
    if (x%2 == 0 || x%3 == 0) {
        return false;
    }
    for (int i = 5; i*i <= x; i = i+6) {
        if (x%i == 0 || x%(i+2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int ti;
    cin >> ti;
    while (ti--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int min_prime = -1;
        for (int i = 0; i < n-1; ++i) {
            for (int j = 1; j < n; ++j) {
                int x = a[i] * a[j];
                if (is_prime(x)) {
                    if (min_prime == -1) {
                        min_prime = x;
                    } else {
                        if (x < min_prime) {
                            min_prime = x;
                        }
                    }
                }
            }
        }
        cout << min_prime << "\n";
    }
    return 0;
}
