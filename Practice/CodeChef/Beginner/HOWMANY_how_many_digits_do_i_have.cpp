/**
 *    author: marcavenzaid
 *    created: 2018-07-01-21.44
 */

/* Problem:
 * Write a program to obtain a number (N) from the user and display whether the
 * number is a one digit number, 2 digit number, 3 digit number or more than 3
 * digit number
 *
 * Input:
 * • First line will contain the number N.
 *
 * Output:
 * Print "1" if N is a 1 digit number.
 * Print "2" if N is a 2 digit number.
 * Print "3" if N is a 3 digit number.
 * Print "More than 3 digits" if N has more than 3 digits.
 *
 * Constraints:
 * • 0 <= N <= 1000000
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long int n;
    cin >> n;
    int l = (int)(log10(n) + 1);
    if (l > 3) {
        cout << "More than 3 digits";
    } else {
        cout << l;
    }
    return 0;
}
