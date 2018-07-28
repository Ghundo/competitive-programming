/* Problem:
 * Prakhar is fond of solving the mathematical equations,one day his girlfriend
 * asked him a new equation to solve. Equation is as follows:
 *
 * K*(K+1) = 4*A*B + 2*max(A,B)
 *
 * She also gives him an array(A) of pair(A,B) of size N,and asks Q queries, in
 * each query she gives the value of K and asks for the number of pairs which is
 * present in the array(A) and satisfies the given equation for given K.
 *
 * Prakhar got stuck in solving the given equation but he don't want to
 * disappoint his girlfriend,so he is asking for your help,can you help him out?
 *
 * Input:
 * • First line contains two space separated integer N [size of the array(A)]
 *   and Q (number of query to ask).
 * • Next N lines contains two space separated integers each lines denotes
 *   [information of pair(A,B)] of array(A).
 * • Next line contains Q space separated integers (value of K).
 *
 * Output:
 * For each Q, print a single integer in new line denoting inverse modulo of the
 * number of pairs which satisfies the given equation and also present in the
 * given array(A) with 10^9+9 or -1 if there is no such pair exist.
 *
 * Constraints:
 * • 1 <= N <= 10^5
 * • 1 <= A[i],B[i] <= 10^9
 * • 1 <= Q <= 10^5
 * • 1 <= K <= 2*10^9
 */

/**
 *    author: marcavenzaid
 *    created: 2018-07-24-00.03
 */

#include <bits/stdc++.h>

using namespace std;

const int MOD = (int)1e9 + 9;

inline long long solve_lhs(long long k) {
    return k * (k+1);
}

inline long long solve_rhs(long long a, long long b) {
    return 4*a*b + 2*max(a,b);
}

inline int modular_inverse(int a, int m) {
    int m1 = m;
    int y = 0, x = 1;
    if (m == 1) {
        return 0;
    }
    while (a > 1) {
        int q = a / m;
        int t = m;
        m = a % m, a = t;
        t = y;
        y = x - q * y;
        x = t;
    }
    if (x < 0) {
        x += m1;
    }
    return x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    long long a[n][2];
    for (int i = 0; i < n; ++i) {
        cin >> a[i][0] >> a[i][1];
    }
    unordered_map<long long, int> rhs_count_map;
    for (int i = 0; i < n; ++i) {
        long long rhs = solve_rhs(a[i][0], a[i][1]);
        ++rhs_count_map[rhs];
    }
    for (int i = 0; i < q; ++i) {
        long long k;
        cin >> k;
        long long lhs = solve_lhs(k);
        if (rhs_count_map.find(lhs) == rhs_count_map.end()) {
            cout << -1 << "\n";
        } else {
            cout << modular_inverse(rhs_count_map[lhs], MOD) << "\n";
        }
    }
    return 0;
}
