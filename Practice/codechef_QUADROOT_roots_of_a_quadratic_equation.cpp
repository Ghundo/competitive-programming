/**
 * author: marcavenzaid
 * created: 2018-07-01-19.16
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    double a, b, c;
    cin >> a >> b >> c;
    double d = sqrt((b*b) - 4*a*c);
    double x1 = (-b + d) / (2 * a);
    double x2 = (-b - d) / (2 * a);
    cout << fixed << setprecision(6) << x1 << "\n";
    cout << fixed << setprecision(6) << x2 << "\n";
    return 0;
}
