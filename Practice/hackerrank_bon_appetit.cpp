/**
 * author: marcavenzaid
 * date created: September 24, 2018
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
    }
    int b;
    cin >> b;
    sum /= 2;
    sum -= (a[k] / 2);
    if (sum == b) {
        cout << "Bon Appetit" << "\n";
    } else {
        cout << b - sum << "\n";
    }
    return 0;
}