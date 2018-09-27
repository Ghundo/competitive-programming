/**
 * author: marcavenzaid
 * created: 2018-08-20-01.01
 */

#include <bits/stdc++.h>

using namespace std;

inline long long sum_consecutive_range(long long l, long long r) {
    return r*(r+1)/2 - l*(l-1)/2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int ti;
    cin >> ti;
    while (ti--) {
        int n, k, x;
        cin >> n >> k >> x;
        vector<int> p(k);
        long long candies_count = 0;
        for (int i = 0; i < k; ++i) {
            cin >> p[i];
            candies_count += p[i];
        }
        if (n != k) {
            sort(p.begin(), p.end());
            n -= k;
            int i = k - 1;
            int maxp = p[0] + x;
            if (maxp > p[i]) {
                p.push_back(maxp + 1);
                ++i;
            }
            while (n > 0) {
                int l = p[i-1] + 1;
                int r = p[i] - 1;
                if (l <= r) {
                    l = max(l, r-n+1);
                    candies_count += sum_consecutive_range(l, r);
                    n -= r-l+1;
                }
                --i;
            }
        }
        cout << candies_count << "\n";
    }
    return 0;
}
