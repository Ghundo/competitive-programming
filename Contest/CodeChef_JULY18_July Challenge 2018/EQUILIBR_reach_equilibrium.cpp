/* Problem:
 * Chef is an intern at Zoozle. He has a co-intern named Ajar who's good at
 * maths. Chef wants to impress Ajar with his zoozliness, so he decided to play
 * the following game with Ajar:
 *
 * • Consider n force vectors in a 2D plane.
 * • First, Ajar uniformly randomly chooses a non-negative real magnitude for
 *   each vector such that the sum of all magnitudes is equal to k. (More
 *   formally, each valid n-tuple of magnitudes can be chosen with the same
 *   probability.)
 * • Then, Chef must choose a direction for each force vector in such a way that
 *   the net force (vector sum of all forces) is equal to zero. Chef wins the
 *   game if he is able to do that; otherwise, Ajar wins the game.
 *
 * Since Chef knows that it may not always be possible to choose the directions
 * such that he wins the game, he would like to know the probability that he'll
 * be able to win if he plays optimally. Can you help him?
 *
 * It can be proven that this probability can be written as a fraction P/Q,
 * where P >= 0 and Q >= 0 are coprime integers. Since we are in the 21st
 * century, nobody is interested in fractions. Therefore, you should compute
 * P*Q^-1 modulo 10^9+7, where Q-1 denotes the modular inverse of Q modulo
 * 10^9+7. (It is guaranteed that this inverse exists and is unique.)
 *
 * Input:
 * • The first line of the input contains a single integer n denoting the number
 *   of force vectors.
 * • The second line contains a single integer k denoting the sum of magnitudes
 *   of all force vectors.
 *
 * Output:
 * Print a single line containing one integer - the value of P*Q^-1 modulo
 * 10^9+7.
 *
 * Constraints:
 * • 1 <= k <= 100
 * • 2 <= n <= 3*10^5
 */

/**
 *    author: marcavenzaid
 *    created: 2018-07-15-18.08
 */

#include <bits/stdc++.h>

using namespace std;

const int MOD = (int)1e9 + 7;

inline int modular_exponentiation(long long x, unsigned int y, int m) {
    long long res = 1;
    x = x % m;
    while (y > 0) {
        if (y & 1) {
            res = (res*x) % m;
        }
        y = y>>1;
        x = (x*x) % m;
    }
    return res;
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
    int n = 5, k = 5;
    cin >> n >> k;
    int q = modular_exponentiation(2, n-1, MOD);
    double less_half_prob = static_cast<double>(n) / static_cast<double>(q);
    int p = q * (1-less_half_prob);
    int pq = ((long long)p * modular_inverse(q, MOD) % MOD);
    cout << pq << "\n";
    return 0;
}
