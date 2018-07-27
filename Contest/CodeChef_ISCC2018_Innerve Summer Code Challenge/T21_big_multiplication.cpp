/**
 *    author: marcavenzaid
 *    created: 2018-07-20-00.38
 */

/* Problem:
 * On the occasion of Mathematics day, Programming Club of our college is
 * hosting a short programming contest based on the theme of Mathematics. Our
 * computer science faculty has given us a problem to solve.
 * He has given two very large numbers m and n.He asks all the students to find
 * the remainder of product of two numbers m and n when divided by 3.
 *
 * Help us to solve this problem.
 *
 * Input:
 * • The first line of the input contains an integer T denoting the number of
 *   test cases.
 * • Each of the next T lines contains two space separated numbers m and n.
 *
 * Output:
 * For each test case, Print remainder on a new line.
 *
 * Constraints:
 * • 1 <= T <= 100
 * • 1 <= length of m and n <= 100000
 */

#include <bits/stdc++.h>

using namespace std;

const int MOD = 3;

inline int bignum_mod(string num, int m) {
    int rs = 0;
    for (int i = 0; i < num.length(); ++i) {
        rs = (rs*10 + (int)num[i] - '0') % m;
    }
    return rs;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int ti;
    cin >> ti;
    while (ti--) {
        string m, n;
        cin >> m >> n;
        cout << (bignum_mod(m, MOD) * bignum_mod(n, MOD)) % MOD << "\n";
    }
    return 0;
}
