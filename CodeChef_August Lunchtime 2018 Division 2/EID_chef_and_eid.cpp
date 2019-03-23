/**
 * author: marcavenzaid
 * created: 2018-08-25-22.02
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int ti;
    cin >> ti;
    while (ti--) {
        int n;
        cin >> n;
        int v[n];
        unordered_map<int, int> u_map;
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            ++u_map[v[i]];
        }
        vector<int> uniq_a;
        bool has_duplicate = false;
        for (auto& i : u_map) {
            uniq_a.push_back(i.first);
            if (i.second > 1) {
                has_duplicate = true;
            }
        }
        if (has_duplicate) {
            cout << 0 << "\n";
        } else {
            sort(uniq_a.begin(), uniq_a.end());
            int min_diff = INT_MAX;
            for (int i = 0; i < uniq_a.size()-1; ++i) {
                int diff = abs(uniq_a[i] - uniq_a[i+1]);
                if (diff < min_diff) {
                    min_diff = diff;
                }
            }
            cout << min_diff << "\n";
        }
    }
    return 0;
}
