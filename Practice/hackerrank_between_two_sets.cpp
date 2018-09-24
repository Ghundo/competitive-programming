/**
 * author: marcavenzaid
 * date created: September 25, 2018
 */

#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    if (a == 0) {
        return b;
    }
    return gcd(b % a, a);
}

int gcd_array(int a[], int n) {
    int result = a[0];
    for (int i = 1; i < n; ++i) {
        result = gcd(result, a[i]);
    }
    return result;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int lcm_array(int a[], int n) {
    int result = a[0];
    for (int i = 1; i < n; ++i) {
        result = (result * a[i]) / gcd(result, a[i]);
    }
    return result;
}

int divisors_count(int n) {
    int count = 0;
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            if (n / i == i) {
                ++count;
            } else {
                count += 2;
            }
        }
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    int lcm_a = lcm_array(a, n);
    int gcd_b = gcd_array(b, m);
    int ans = 0;
    if (gcd_b % lcm_a == 0) {
        int x = gcd_b / lcm_a;
        ans = divisors_count(x);
    }
    cout << ans << "\n";
    return 0;
}