/**
 * author: marcavenzaid
 * created: 2018-07-01-17.21
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    double a, b;
    char c;
    cin >> a >> b >> c;
    double x;
    if (c == '+') {
        x = a + b;
    } else if (c == '-') {
        x = a - b;
    } else if (c == '*') {
        x = a * b;
    } else if (c == '/') {
        x = a / b;
    }
    cout << fixed << setprecision(6) << x << "\n";
    return 0;
}
