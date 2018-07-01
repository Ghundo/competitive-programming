/* Problem:
 * Write a program to take the values for A, B, C of a quadratic equation
 * AX^2 + BX + C = 0 and then find all the roots of the equation. It is
 * guaranteed that A != 0 and that the equation has at least one real root.
 *
 * x1 = (-b + sqrt((b^2) - 4ac)) / 2a
 * x2 = (-b - sqrt((b^2) - 4ac)) / 2a
 *
 * Input:
 * First line will contain the value of A.
 * Second line will contain the value of B.
 * Third line will contain the value of  C
 *
 * Output:
 * Output two lines. First line contains the value of root 1 (x1) and second
 * line contains the value of root 2 (x2). Your output will be considered to be
 * correct if the difference between your output and the actual answer is not
 * more than 10^-6.
 *
 * Constraints:
 * -1000 <= A <= 1000
 * -1000 <= B <= 1000
 * -1000 <= C <= 1000
 */

/**
 *    author: marcavenzaid
 *    created: 2018-07-01-19.16
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    double a, b, c;
    cin >> a >> b >> c;
    double d = sqrt((b*b) - 4*a*c);
    double x1 = (-b + d) / (2*a);
    double x2 = (-b - d) / (2*a);
    cout << fixed << setprecision(6) << x1 << "\n";
    cout << fixed << setprecision(6) << x2 << "\n";
    return 0;
}
