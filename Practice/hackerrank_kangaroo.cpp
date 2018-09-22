/**
 * author: marcavenzaid
 * date created: September 23, 2018
 */

#include <bits/stdc++.h>

using namespace std;

int v1, v2;

bool solve(int x1, int x2) {
    if (x1 == x2) {
        return true;
    }
    if (x1 > x2) {
        return false;
    }
    return solve(x1 + v1, x2 + v2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int x1, x2;
    cin >> x1 >> v1 >> x2 >> v2;
    if (x1 > x2) {
        swap(x1, x2);
        swap(v1, v2);
    }
    bool ans = (x1 < x2 && v1 < v2) ? false : solve(x1, x2);
    cout << ((ans) ? "YES" : "NO") << "\n";
    return 0;
}