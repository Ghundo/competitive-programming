/**
 * author: marcavenzaid
 * created: 2018-08-18-18.25
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        long long d, a, m, b, x;
        cin >> d >> a >> m >> b >> x;
        long long interest = (a*m)+b;
        double i = floor((double)(x-d)/interest);
        int months_count = i*(m+1);
        long long y = d + (interest * i);
        if (y + a*m < x) {
            cout << months_count + m + 1 << "\n";
        } else {
            int z = ceil((double)(x-y)/a);
            cout << months_count + z << "\n";
        }
    }
    return 0;
}
