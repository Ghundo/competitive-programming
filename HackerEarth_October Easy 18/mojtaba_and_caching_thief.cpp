#include <bits/stdc++.h>

using namespace std;

double va, vb;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    double xa = 0, xb;
    cin >> xb >> va >> vb;
    if (xb == 0) {
        cout << 0 << "\n";
        return 0;
    }
    if (va - vb < 1e-6) {
        cout << -1 << "\n";
    } else {
        double x = 2 * ((xb - xa) / (va - vb));
        cout << setprecision(6) << fixed << x << "\n";
    }    
    return 0;
}
