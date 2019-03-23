/**
 * author: marcavenzaid
 * created: 2018-09-08-00.01
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int s;
    cin >> s;
    int p = 0;
    string q;
    if (s <= 90) {
        q = "No punishment";
    } else if (s >= 91 && s <= 110) {
        p = (s - 90) * 300;
        q = "Warning";
    } else {
        p = (s - 90) * 500;
        q = "License removed";
    }
    cout << p << " " << q << "\n";
    return 0;
}
