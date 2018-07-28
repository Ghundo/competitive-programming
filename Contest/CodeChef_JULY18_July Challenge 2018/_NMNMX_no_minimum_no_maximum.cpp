/* Problem:
 * Maheshmati and Sangu are playing a game. First, Maheshmati gives Sangu a
 * sequence of N distinct integers a1,a2,…,aN (not necessarily sorted) and an
 * integer K. Sangu has to create all subsequences of this sequence with length
 * K. For each subsequence, he has to write down the product of K-2 integers:
 * all elements of this subsequence except the minimum and maximum element.
 *
 * Sangu wins the game if he is able to write down all these numbers and tell
 * Maheshmati their product (modulo 109+7, since it can be very large). However,
 * Sangu is a very lazy child and thus wants you to help him win this game.
 * Compute the number Sangu should tell Maheshmati!
 *
 * Input:
 * • The first line of the input contains a single integer T denoting the number
 *   of test cases. The description of T test cases follows.
 * • The first line of each test case contains two space-separated integers N
 *   and K.
 * • The second line contains N space-separated integers a1,a2,…,aN.
 *
 * Output:
 * For each test case, print a single line containing one integer - the product
 * of all numbers written down by Sangu modulo 10^9+7.
 *
 * Constraints:
 * • 1 <= T <= 10
 * • 3 <= N <= 5,000
 * • 3 <= K <= N
 * • 1 <= ai <= 10,000 for each valid i
 * • the numbers a1,a2,…,aN are pairwise distinct
 */

/**
 *    author: marcavenzaid
 *    created: 2018-07-09-00.31
 */

#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9+7;

long long modular_exponentiation(long long x, unsigned int y, int p) {
    long long res = 1;
    x = x % p;
    while (y > 0) {
        if (y & 1) {
            res = (res*x) % p;
        }
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}

void binomial_coeff(long long a[], int n, int k, int m) {
    long long c[k+1];
    memset(c, 0, sizeof(c));
    c[0] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = min(i, k); j > 0; --j) {
            c[j] = (c[j] + c[j-1]) % m;
        }
        if (i >= k-1) {
            a[i] = c[k];
        }
        for (int i = 0; i < k; ++i) {
            a[i] = 0;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for (int ti = 1; ti <= t; ++ti) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        long long o_as_min[n], o_as_max[n];
        binomial_coeff(o_as_max, n-1, k-1, MOD);
        copy(o_as_max, o_as_max+n, o_as_min);
        reverse(o_as_min, o_as_min+n);
        sort(a, a+n);
        long long finalo[n];
        long long p = 1;
        for (int i = 0; i < n; ++i) {
            finalo[i] = o_as_min[0] - o_as_min[i] - o_as_max[i];
            p = (p * modular_exponentiation(a[i], finalo[i], MOD)) % MOD;
        }
        cout << p << "\n";
    }
    return 0;
}
