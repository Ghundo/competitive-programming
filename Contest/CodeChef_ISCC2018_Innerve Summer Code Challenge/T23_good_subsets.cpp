/**
 *    author: marcavenzaid
 *    created: 2018-07-20-21.47
 */

#include <bits/stdc++.h>

using namespace std;

inline vector<int> divisors(int n) {
    vector<int> d;
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n%i == 0) {
            if (n/i == i) {
                d.push_back(i);
            } else {
                d.push_back(i);
                d.push_back(n/i);
            }
        }
    }
    return d;
}

inline bool is_divisible(int x, vector<int> divs) {
    for (int i = 0; i < divs.size(); ++i) {
        if (x%divs[i] != 0) {
            return false;
        }
    }
    return true;
}

inline bool has_good_subset(int a[], int n) {
    sort(a, a+n);
    if (a[0] == 1) {
        return true;
    }
    if (a[0] == a[n-1]) {
        return false;
    }
    vector<int> min_e_divs = divisors(*min_element(a, a+n));
    min_e_divs.erase(min_e_divs.begin());
    for (int i = 0; i < n; ++i) {
        if (!is_divisible(a[i], min_e_divs)) {
            return true;
        }
    }
    return false;
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
        bool b = has_good_subset(a, n);
        if (b) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}
