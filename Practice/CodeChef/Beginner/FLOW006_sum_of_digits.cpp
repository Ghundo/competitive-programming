/**
 *    author: marcavenzaid
 *    created: 2018-06-26-01.00
 */

/* Problem:
 * You're given an integer N. Write a program to calculate the sum of all the
 * digits of N.
 *
 * Input:
 * The first line contains an integer T, total number of test cases. Then follow
 * T lines, each line contains an integer N.
 *
 * Output:
 * Calculate the sum of digits of N.
 *
 * Constraints:
 * • 1 <= T <= 1000
 * • 1 <= N <= 1000000
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    int a[t];
    int sums[t] = {};
    for(int i = 0; i < t; i++) {
        cin >> a[i];
        while(a[i] > 0) {
            sums[i] += a[i] % 10;
            a[i] /= 10;
        }
    }
    for(int i = 0; i < t; i++) {
        cout << sums[i] << "\n";
    }
    return 0;
}
