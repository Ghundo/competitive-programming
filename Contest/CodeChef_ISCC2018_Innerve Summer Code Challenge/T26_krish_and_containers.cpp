/* Problem:
 * Krish loves chocolates very much. He has N containers numbered from 1 to N.
 * Everyday, he used to select two indices [l,r] and adds 1 chocolate to each
 * box starting from l to r (both inclusive).He repeats the same activity for M
 * days.
 *
 * After M days, he asked his friend Nakshatra Q queries. Each query can be
 * described as: How many containers have at least K chocolates.
 * Help Nakshatra to answer these queries.
 *
 * Input:
 * • First line contains an integer N that denotes the number of containers.
 * • Second line contains an integer M denoting the number of days.
 * • Each of the next M lines consists of two space separated integers l and r.
 * • Followed by an integer Q denoting the number of queries.
 * • Each of next Q lines contain a single integer K.
 *
 * Output:
 * For each query, print the result in new line.
 *
 * Constraints:
 * • 1 <= N <= 100000
 * • 1 <= M <= 1000
 * • 1 <= l <= r <= N
 * • 1 <= Q <= 100000
 * • 1 <= K <= N
 */

/**
 *    author: marcavenzaid
 *    created: 2018-07-22-14.03
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    int l, r;
    int cont[n] = {};
    for (int i = 0; i < m; ++i) {
        cin >> l >> r;
        --l;
        --r;
        if (l > 0) {
            cont[l-1] -= 1;
        }
        cont[r] += 1;
    }
    for (int i = n-1; i > 0; --i) {
        cont[i-1] += cont[i];
    }
    sort(cont, cont+n);
    int choco_count[n] = {};
    int choco_i = cont[n-1];
    int cont_i = n-1;
    do {
        while (cont[cont_i] == choco_i) {
            ++choco_count[choco_i-1];
            --cont_i;
        }
        choco_count[choco_i-2] = choco_count[choco_i-1];
    } while (--choco_i);
    int q;
    cin >> q;
    while (q--) {
        int k;
        cin >> k;
        cout << choco_count[k-1] << "\n";
    }
    return 0;
}
