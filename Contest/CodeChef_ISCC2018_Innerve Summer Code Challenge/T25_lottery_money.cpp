/**
 * author: marcavenzaid
 * created: 2018-07-25-19.59
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int ti;
    std::cin >> ti;
    while (ti--) {
        int n, k;
        std::cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; ++i) {
            std::cin >> a[i];
        }
        int max_city_visit = 0;
        int cost = 0, max_cost = 0;
        int i = 0, j = 0;
        while (j < n) {
            if (j < n && cost + a[j] <= k) {
                cost += a[j++];
            } else {
                if (j - i > max_city_visit || (j - i == max_city_visit && cost > max_cost)) {
                    max_city_visit = j - i;
                    max_cost = cost;
                }
                cost -= a[i++];
            }
        }
        std::cout << max_city_visit << " " << k - max_cost << "\n";
    }
    return 0;
}
