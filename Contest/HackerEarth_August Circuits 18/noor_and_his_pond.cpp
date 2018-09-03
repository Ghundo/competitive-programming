/**
 * author: marcavenzaid
 * created: 2018-08-21-02.36
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
        vector<pair<int, int>> v;
        for (int i = 0; i < n; ++i) {
            int s, e;
            cin >> s >> e;
            v.push_back(make_pair(s, -1));
            v.push_back(make_pair(e, 1));
        }
        sort(v.begin(), v.end());
        int max_fish_count = 0, cur_fish_count = 0;
        for (int i = 0; i < v.size(); ++i) {
            cur_fish_count += v[i].second;
            max_fish_count = max(max_fish_count, cur_fish_count);
        }
        cout << max_fish_count << "\n";
    }
    return 0;
}
