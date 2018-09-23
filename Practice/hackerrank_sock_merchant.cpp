/**
 * author: marcavenzaid
 * date created: September 24, 2018
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    int ans = 0;
    unordered_set<int> u_set;    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (u_set.find(a[i]) == u_set.end()) {
            u_set.insert(a[i]);
        } else {
            ++ans;
            u_set.erase(a[i]);
        }
    }
    cout << ans << "\n";
    return 0;
}