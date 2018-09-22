/**
 * author: marcavenzaid
 * created: 2018-06-26-01.00
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    int a[t];
    int sums[t] = {0};
    for(int i = 0; i < t; i++) {
        cin >> a[i];
        while(a[i] > 0) {
            sums[i] += a[i] % 10;
            a[i] /= 10;
        }
    }
    for(int i = 0; i < t; i++) {
        cout << sums[i] << "\n";
    }
    return 0;
}
