/**
 * author: marcavenzaid
 * created: 2018-08-20-00.29
 */

#include <bits/stdc++.h>

using namespace std;

inline int frequency(int n, int d) {
    int f = 0;
    while (n > 0) {
        if (n % 10 == d) {
            f++;
        }
        n /= 10;
    }
    return f;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int ti;
    cin >> ti;
    while (ti--) {
        int n;
        cin >> n;
        while (true) {
            ++n;
            if (frequency(n, 3) >= 3) {
                cout << n << "\n";
                break;
            }
        }
    }
    return 0;
}
