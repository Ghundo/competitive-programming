/**
 *    author: marcavenzaid
 *    created: 2018-07-08-02.48
 */

/* Problem:
 * Katya has a sequence of integers a1,a2,…,an and an integer m.
 *
 * She defines a good sequence of integers as a non-empty sequence such that the
 * sum of the elements in each of its non-empty subsequences is divisible by m.
 *
 * Katya wants to know the number of good subsequences of the sequence a.
 * Can you help her?
 *
 * Input:
 * • The first line of the input contains a single integer T denoting the number
 *   of test cases. The description of T test cases follows.
 * • The first line of each test case contains two space-separated integers n
 *   and m.
 * • The second line contains n space-separated integers a1,a2,…,an.
 *
 * Output:
 * For each test case, print a single line containing one integer - the number
 * of good subsequences.
 *
 * Constraints:
 * • 1 <= T <= 1,000
 * • 1 <= n <= 30
 * • 1 <= m <= 1,000
 * • 1 <= ai <= 1,000 for each valid i
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int ti;
    cin >> ti;
    while (ti--) {
        int n, m;
        cin >> n >> m;
        int a[n];
        int x = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i]%m == 0) {
                x++;
            }
        }
        int gss = pow(2, x) - 1;
        cout << gss << "\n";
    }
    return 0;
}
