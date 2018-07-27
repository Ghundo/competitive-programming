/**
 *    author: marcavenzaid
 *    created: 2018-07-24-18.53
 */

#include <bits/stdc++.h>

using namespace std;

const unsigned long long MOD = (int)1e9 + 7;

int modular_exponentiation(long long x, unsigned int y, int md) {
    long long res = 1;
    x = x % md;
    while (y > 0) {
        if (y & 1) {
            res = (res*x) % md;
        }
        y = y>>1;
        x = (x*x) % md;
    }
    return res;
}

int geometric_series_sum(int n, long long k, int md) {
    long long sum = 0;
    long long factor = 1;
    while (n > 0 && k != 0) {
        if (n%2 == 1) {
            long long temp = (factor + modular_exponentiation(k, n, md)-1) % md;
            sum = (sum+temp) % md;
            --n;
        }
        factor = (((1+k)%md)*factor) % md;
        k = (k*k) % md;
        n = floor(n/2);
    }
    return sum % md;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int ti;
    cin >> ti;
    while (ti--) {
        long long n, k;
        cin >> n >> k;
        cout << geometric_series_sum(n, k, MOD) << "\n";
    }
    //((k^(n+1))-1 / k-1)-1
    return 0;
}
