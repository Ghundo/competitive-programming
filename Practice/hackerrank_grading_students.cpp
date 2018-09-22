/**
 * author: marcavenzaid
 * date created: September 22, 2018
 */

#include <bits/stdc++.h>

using namespace std;

int solve(int x) {
    if (x < 38) {
        return x;
    }
    int next_multiple_of_5 = (x / 5 + 1) * 5;
    return (next_multiple_of_5 - x < 3) ? next_multiple_of_5 : x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        cout << solve(x) << "\n";
    }
    return 0;
}