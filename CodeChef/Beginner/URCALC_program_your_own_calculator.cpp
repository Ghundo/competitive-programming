/**
 *    author: marcavenzaid
 *    created: 2018-07-01-17.21
 */

/* Problem:
 * Write a program to obtain 2 numbers (A and B) and an arithmetic operator (C)
 * and then design a calculator depending upon the operator entered by the user.
 *
 * So for example if C="+", you have to sum the two numbers.
 * If C="-", you have to subtract the two numbers.
 * If C="*", you have to print the product.
 * If C="/", you have to divide the two numbers.
 *
 * Input:
 * First line will contain the first number A.
 * Second line will contain the second number B.
 * Third line will contain the operator C, that is to be performed on A and B.
 *
 * Output:
 * Output a single line containing the answer, obtained by, performing the
 * operator on the numbers. Your output will be considered to be correct if the
 * difference between your output and the actual answer is not more than 10-6.
 *
 * Constraints:
 * -1000 <= A <= 1000
 * -1000 <= B <= 1000 and B!=0
 * C can only be one of these 4 operators {"+","-","*","/"}
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
