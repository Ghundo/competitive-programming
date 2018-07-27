/**
 *    author: marcavenzaid
 *    created: 2018-07-16-01.44
 */

/* Problem:
 * You are given a string S of lowercase English letters with length N. You are
 * allowed to (but don't have to) choose one index in this string and change the
 * letter at this index to any other lowercase English letter. The cost of this
 * operation is the absolute value of the difference of ASCII values of the new
 * letter and the original letter; let's denote it by X.
 *
 * Next, consider the number of pairs of indices (i,j) in the resulting string
 * (the string after changing one letter, or the original string if no letter
 * was changed) such that 1 <= i < j <= N and Si < Sj. Let's denote it by Y.
 *
 * Find the minimum possible value of X+Y.
 *
 * Input:
 * • The first line of the input contains a single integer T denoting the number
 *   of test cases. The description of T test cases follows.
 * • The first and only line of each test case contains a single string S.
 *
 * Output:
 * For each test case, print a single line containing one integer - the minimum
 * value of X+Y.
 *
 * Constraints:
 * • 1 <= T <= 20
 * • 1 <= N <= 10^5
 * • S contains only lowercase English letters
 */

#include <bits/stdc++.h>

using namespace std;

void fill_prefix_sum(string s, int n, int prefix_sum[]) {
    prefix_sum[0] = s[0];
    for (int i = 1; i < n; ++i)
        prefix_sum[i] = prefix_sum[i-1] + s[i];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s = "abcd";
    int n = s.length();
    int ps[n];
    fill_prefix_sum(s, n, ps);
    for (int i = 0; i < n; i++) {
        cout << ps[i] << " ";
    }
    return 0;
}
