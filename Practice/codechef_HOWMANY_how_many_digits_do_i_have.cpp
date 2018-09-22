/**
 * author: marcavenzaid
 * created: 2018-07-01-21.44
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long int n;
    cin >> n;
    int l = (int)(log10(n) + 1);
    if (l > 3) {
        cout << "More than 3 digits";
    } else {
        cout << l;
    }
    return 0;
}
