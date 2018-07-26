/**
 *    author: marcavenzaid
 *    created: 2018-07-07-00.43
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
        cout << "1 1";
        for (int i = 0; i < n/2; ++i) {
            cout << "0";
        }
        cout << "\n";
    }
    return 0;
}
