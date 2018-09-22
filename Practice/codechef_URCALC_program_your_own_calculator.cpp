/**
 * author: marcavenzaid
 * created: 2018-07-01-17.21
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie();
    double a, b;
    char c;
    cin >> a >> b >> c;
    if (c == '+') {
        cout << fixed << setprecision(6) << a + b;
    } else if (c == '-') {
        cout << fixed << setprecision(6) << a - b;
    } else if (c == '*') {
        cout << fixed << setprecision(6) << a * b;
    } else if (c == '/') {
        cout << fixed << setprecision(6) << a / b;
    }
    return 0;
}
